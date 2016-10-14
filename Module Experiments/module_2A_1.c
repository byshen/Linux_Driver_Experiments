#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

static int __init hello_init(void){
	printk("<3>Hello a linux kernel module 2A_1.\n");
	return 0;
}

static void __exit hello_exit(void){
	printk("<3>Bye 2A_1.\n");
}

module_init(hello_init);
module_exit(hello_exit);
MODULE_LICENSE("GPL");
