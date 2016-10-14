#include <linux/module.h>
#include <linux/list.h>
#include <linux/init.h>
#include <linux/sched.h>
#include <linux/proc_fs.h>
#include <linux/seq_file.h>
MODULE_LICENSE("Dual BSD/GPL");
static int ctx_proc_print(struct seq_file *m, void *v) {
	struct task_struct *task, *p;
	struct list_head *pos;
	int count=0;

	seq_printf(m, "test module init\n");
	
	task=&init_task;

	list_for_each(pos, &task->tasks)
	{
		p=list_entry(pos, struct task_struct, tasks);
		count++;
		seq_printf(m, "%-15s\t[pid: %d]\t[ctx: %d]\n", p->comm, p->pid,p->ctx);
	}
	seq_printf(m, "Total %d tasks\n", count);

	return 0;
}

static int ctx_proc_open(struct inode *inode, struct file *file) {
	return single_open(file, ctx_proc_print, NULL);
}

static const struct file_operations ctx_proc_fops = {
	.owner = THIS_MODULE,
	.open = ctx_proc_open,
	.read = seq_read,
	.llseek = seq_lseek,
	.release = single_release,
};

static int test_init(void)
{
	proc_create("ctx_proc",0,NULL,&ctx_proc_fops);
	return 0;
}
static void test_exit(void)
{
	remove_proc_entry("ctx_proc", NULL);
}
module_init(test_init);
module_exit(test_exit);
