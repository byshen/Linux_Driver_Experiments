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
	{ 0x360040ce, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0x6035c7d2, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x303cb5c, __VMLINUX_SYMBOL_STR(put_page) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xfb254a0a, __VMLINUX_SYMBOL_STR(find_vma) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x6194d728, __VMLINUX_SYMBOL_STR(up_read) },
	{ 0xb4cb065c, __VMLINUX_SYMBOL_STR(down_read) },
	{ 0xabf95ebb, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x4f6b400b, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x4412b0c0, __VMLINUX_SYMBOL_STR(__get_page_tail) },
	{ 0x6bf1c17f, __VMLINUX_SYMBOL_STR(pv_lock_ops) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x2ca6d85c, __VMLINUX_SYMBOL_STR(pv_mmu_ops) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "62A82D9CB03B1E006301090");
