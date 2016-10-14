#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x74f40b49, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xa5972703, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0x696a5b1d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x60a13e90, __VMLINUX_SYMBOL_STR(rcu_barrier) },
	{ 0xe539d468, __VMLINUX_SYMBOL_STR(mount_bdev) },
	{ 0x217780b9, __VMLINUX_SYMBOL_STR(page_symlink_inode_operations) },
	{ 0x5751a9cf, __VMLINUX_SYMBOL_STR(generic_read_dir) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xe94e0e24, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0x9eae979e, __VMLINUX_SYMBOL_STR(default_llseek) },
	{ 0xa5689557, __VMLINUX_SYMBOL_STR(__bread_gfp) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xaf9c3e9a, __VMLINUX_SYMBOL_STR(d_rehash) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x3d3f54d0, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0xc43343d1, __VMLINUX_SYMBOL_STR(set_nlink) },
	{ 0xa07a37f0, __VMLINUX_SYMBOL_STR(memchr) },
	{ 0x3f4efab5, __VMLINUX_SYMBOL_STR(generic_ro_fops) },
	{ 0xd6519f62, __VMLINUX_SYMBOL_STR(unlock_page) },
	{ 0x3bc2b33, __VMLINUX_SYMBOL_STR(__brelse) },
	{ 0x70ee7450, __VMLINUX_SYMBOL_STR(inode_init_once) },
	{ 0xb76e53, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xa916b694, __VMLINUX_SYMBOL_STR(strnlen) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x926d974a, __VMLINUX_SYMBOL_STR(unlock_new_inode) },
	{ 0x2e691a8b, __VMLINUX_SYMBOL_STR(kill_block_super) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe5b9489e, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xf724e8f, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0xf5a69d96, __VMLINUX_SYMBOL_STR(register_filesystem) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x643e0ce5, __VMLINUX_SYMBOL_STR(call_rcu_sched) },
	{ 0x981341f1, __VMLINUX_SYMBOL_STR(sync_filesystem) },
	{ 0x54a4fba6, __VMLINUX_SYMBOL_STR(sb_set_blocksize) },
	{ 0x506409b9, __VMLINUX_SYMBOL_STR(d_make_root) },
	{ 0xfd392445, __VMLINUX_SYMBOL_STR(unregister_filesystem) },
	{ 0xe191f3ac, __VMLINUX_SYMBOL_STR(init_special_inode) },
	{ 0x7b423c3, __VMLINUX_SYMBOL_STR(d_instantiate) },
	{ 0x15aca2b, __VMLINUX_SYMBOL_STR(iget_locked) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "D5C2932C09138405A65CC63");
