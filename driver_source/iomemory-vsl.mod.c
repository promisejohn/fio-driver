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
	{ 0x53a8e63d, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x61b7b126, __VMLINUX_SYMBOL_STR(simple_strtoull) },
	{ 0x40730674, __VMLINUX_SYMBOL_STR(alloc_pages_current) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x9c59af08, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0x93073a58, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_node) },
	{ 0x83b32430, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xb512dd48, __VMLINUX_SYMBOL_STR(pci_bus_read_config_byte) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x405c1144, __VMLINUX_SYMBOL_STR(get_seconds) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xc897c382, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0xbd39e6fd, __VMLINUX_SYMBOL_STR(blk_delay_queue) },
	{ 0xe6fb675c, __VMLINUX_SYMBOL_STR(node_to_cpumask_map) },
	{ 0x99a1292a, __VMLINUX_SYMBOL_STR(alloc_disk) },
	{ 0x8d108923, __VMLINUX_SYMBOL_STR(up_read) },
	{ 0xd20e60e5, __VMLINUX_SYMBOL_STR(blk_cleanup_queue) },
	{ 0xda3e43d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0x784213a6, __VMLINUX_SYMBOL_STR(pv_lock_ops) },
	{ 0x65a06ea7, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x9dd73615, __VMLINUX_SYMBOL_STR(blk_queue_max_hw_sectors) },
	{ 0xcb8412f7, __VMLINUX_SYMBOL_STR(seq_open) },
	{ 0xc8b57c27, __VMLINUX_SYMBOL_STR(autoremove_wake_function) },
	{ 0xbd100793, __VMLINUX_SYMBOL_STR(cpu_online_mask) },
	{ 0x34184afe, __VMLINUX_SYMBOL_STR(current_kernel_time) },
	{ 0xdbedeefe, __VMLINUX_SYMBOL_STR(dma_set_mask) },
	{ 0xd75f42b2, __VMLINUX_SYMBOL_STR(blk_limits_io_opt) },
	{ 0xfcb5654d, __VMLINUX_SYMBOL_STR(blk_queue_bounce) },
	{ 0x4d974b9c, __VMLINUX_SYMBOL_STR(register_sysrq_key) },
	{ 0xc2f1cbce, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0xefaba24b, __VMLINUX_SYMBOL_STR(pci_disable_msix) },
	{ 0x8b900f3b, __VMLINUX_SYMBOL_STR(_raw_read_lock) },
	{ 0x20000329, __VMLINUX_SYMBOL_STR(simple_strtoul) },
	{ 0xc068ff32, __VMLINUX_SYMBOL_STR(blk_dump_rq_flags) },
	{ 0xc0a3d105, __VMLINUX_SYMBOL_STR(find_next_bit) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0xc03fdabc, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0x3fec048f, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0xe1d5de24, __VMLINUX_SYMBOL_STR(x86_dma_fallback_dev) },
	{ 0x1fa43e62, __VMLINUX_SYMBOL_STR(pci_release_regions) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xf8983de7, __VMLINUX_SYMBOL_STR(prepare_to_wait_exclusive) },
	{ 0xf84f8e94, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x9f71e397, __VMLINUX_SYMBOL_STR(pci_bus_write_config_word) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0x7a2af7b4, __VMLINUX_SYMBOL_STR(cpu_number) },
	{ 0x54ffe6c6, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x9a28c46c, __VMLINUX_SYMBOL_STR(blk_alloc_queue_node) },
	{ 0x118a5e56, __VMLINUX_SYMBOL_STR(blk_limits_io_min) },
	{ 0x8af08e8a, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xb29c0a66, __VMLINUX_SYMBOL_STR(mutex_trylock) },
	{ 0x73a11961, __VMLINUX_SYMBOL_STR(down_read) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xbf4935db, __VMLINUX_SYMBOL_STR(down_write_trylock) },
	{ 0xaa9087c0, __VMLINUX_SYMBOL_STR(param_ops_string) },
	{ 0x511a881c, __VMLINUX_SYMBOL_STR(kthread_bind) },
	{ 0x47b33f4c, __VMLINUX_SYMBOL_STR(invalidate_bdev) },
	{ 0xf432dd3d, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x4f8b5ddb, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0x840e1686, __VMLINUX_SYMBOL_STR(PDE_DATA) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0x2beba040, __VMLINUX_SYMBOL_STR(blk_queue_max_segments) },
	{ 0x5d41c87c, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0xa5203407, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0x9532d6de, __VMLINUX_SYMBOL_STR(misc_register) },
	{ 0xb8e7ce2c, __VMLINUX_SYMBOL_STR(__put_user_8) },
	{ 0xd5f2172f, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0xc3587304, __VMLINUX_SYMBOL_STR(kern_path) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x936d3d9a, __VMLINUX_SYMBOL_STR(proc_mkdir) },
	{ 0xc80e8770, __VMLINUX_SYMBOL_STR(pci_enable_msix) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xacf7984c, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x2e2b40d2, __VMLINUX_SYMBOL_STR(strncat) },
	{ 0xad1540f4, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xe15f42bb, __VMLINUX_SYMBOL_STR(_raw_spin_trylock) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xbafbf2c8, __VMLINUX_SYMBOL_STR(blk_queue_max_discard_sectors) },
	{ 0x79ef6904, __VMLINUX_SYMBOL_STR(del_gendisk) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0xa301ea6f, __VMLINUX_SYMBOL_STR(blk_peek_request) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x9166fada, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x20240cd7, __VMLINUX_SYMBOL_STR(elevator_exit) },
	{ 0x5a921311, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0xbf8ba54a, __VMLINUX_SYMBOL_STR(vprintk) },
	{ 0xa7b57ab1, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x90f3354c, __VMLINUX_SYMBOL_STR(pci_bus_write_config_dword) },
	{ 0xc3aaf0a9, __VMLINUX_SYMBOL_STR(__put_user_1) },
	{ 0xcc759d9e, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x143687b2, __VMLINUX_SYMBOL_STR(_raw_write_lock) },
	{ 0x71a50dbc, __VMLINUX_SYMBOL_STR(register_blkdev) },
	{ 0x8834396c, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x2072ee9b, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x41425107, __VMLINUX_SYMBOL_STR(up_write) },
	{ 0xd96ec02b, __VMLINUX_SYMBOL_STR(down_write) },
	{ 0x4c305e09, __VMLINUX_SYMBOL_STR(bio_endio) },
	{ 0x9f46ced8, __VMLINUX_SYMBOL_STR(__sw_hweight64) },
	{ 0x61651be, __VMLINUX_SYMBOL_STR(strcat) },
	{ 0xf5095695, __VMLINUX_SYMBOL_STR(pci_find_capability) },
	{ 0xb5a459dc, __VMLINUX_SYMBOL_STR(unregister_blkdev) },
	{ 0x1fe9f800, __VMLINUX_SYMBOL_STR(unregister_cpu_notifier) },
	{ 0xbd9074b1, __VMLINUX_SYMBOL_STR(blk_finish_plug) },
	{ 0x33189df8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x78764f4e, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0xdfb34e8c, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0xb2fd5ceb, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0x42c8de35, __VMLINUX_SYMBOL_STR(ioremap_nocache) },
	{ 0xa07a23a0, __VMLINUX_SYMBOL_STR(pci_bus_read_config_word) },
	{ 0x8b43159b, __VMLINUX_SYMBOL_STR(register_cpu_notifier) },
	{ 0x3bae9506, __VMLINUX_SYMBOL_STR(blk_queue_make_request) },
	{ 0x92bbd5cd, __VMLINUX_SYMBOL_STR(pci_bus_read_config_dword) },
	{ 0xeeec26a7, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xb9249d16, __VMLINUX_SYMBOL_STR(cpu_possible_mask) },
	{ 0xeaa5f863, __VMLINUX_SYMBOL_STR(get_user_pages) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x3b7dd711, __VMLINUX_SYMBOL_STR(put_disk) },
	{ 0x5cb0b27d, __VMLINUX_SYMBOL_STR(elevator_init) },
	{ 0x43261dca, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0x354ecc02, __VMLINUX_SYMBOL_STR(blk_init_queue_node) },
	{ 0x7f24de73, __VMLINUX_SYMBOL_STR(jiffies_to_usecs) },
	{ 0x64084136, __VMLINUX_SYMBOL_STR(blk_fetch_request) },
	{ 0xa23e16b9, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x9af7ee18, __VMLINUX_SYMBOL_STR(pci_enable_msi_range) },
	{ 0xe47270b7, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xae67a5f5, __VMLINUX_SYMBOL_STR(down_read_trylock) },
	{ 0xcc5005fe, __VMLINUX_SYMBOL_STR(msleep_interruptible) },
	{ 0x215b60b8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xd52bf1ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x3928efe9, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x12593108, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0x99195078, __VMLINUX_SYMBOL_STR(vsnprintf) },
	{ 0xcf21d241, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xf8d9608d, __VMLINUX_SYMBOL_STR(blk_stop_queue) },
	{ 0xfac2a257, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0x728fb4b2, __VMLINUX_SYMBOL_STR(pci_bus_write_config_byte) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x95b52f82, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xd34bd3c1, __VMLINUX_SYMBOL_STR(pci_request_regions) },
	{ 0x20b2bb2d, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0x61a74bab, __VMLINUX_SYMBOL_STR(pci_disable_msi) },
	{ 0x1bef028c, __VMLINUX_SYMBOL_STR(add_disk) },
	{ 0xedc03953, __VMLINUX_SYMBOL_STR(iounmap) },
	{ 0xd3719d59, __VMLINUX_SYMBOL_STR(paravirt_ticketlocks_enabled) },
	{ 0x2deb3c8b, __VMLINUX_SYMBOL_STR(blk_requeue_request) },
	{ 0xa67caa35, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x2e6c265e, __VMLINUX_SYMBOL_STR(put_page) },
	{ 0x5a4896a8, __VMLINUX_SYMBOL_STR(__put_user_2) },
	{ 0x33c8bb8, __VMLINUX_SYMBOL_STR(pci_get_device) },
	{ 0xfa66f77c, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x4cbbd171, __VMLINUX_SYMBOL_STR(__bitmap_weight) },
	{ 0x622a439f, __VMLINUX_SYMBOL_STR(pci_dev_put) },
	{ 0xb742fd7, __VMLINUX_SYMBOL_STR(simple_strtol) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x558741e8, __VMLINUX_SYMBOL_STR(blk_queue_max_segment_size) },
	{ 0x844aafca, __VMLINUX_SYMBOL_STR(seq_release) },
	{ 0xb0e602eb, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0xba252729, __VMLINUX_SYMBOL_STR(vmalloc_to_page) },
	{ 0x6153b4b9, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0x5163f744, __VMLINUX_SYMBOL_STR(blk_queue_logical_block_size) },
	{ 0x4f6b400b, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0xf7545c26, __VMLINUX_SYMBOL_STR(bdget_disk) },
	{ 0xcbc9557f, __VMLINUX_SYMBOL_STR(unregister_sysrq_key) },
	{ 0x953f7845, __VMLINUX_SYMBOL_STR(__blk_end_request) },
	{ 0x7d705738, __VMLINUX_SYMBOL_STR(blk_start_plug) },
	{ 0x8c98c7a2, __VMLINUX_SYMBOL_STR(misc_deregister) },
	{ 0xd9a8b7aa, __VMLINUX_SYMBOL_STR(bdput) },
	{ 0xd755a45, __VMLINUX_SYMBOL_STR(__init_rwsem) },
	{ 0x9e7d6bd0, __VMLINUX_SYMBOL_STR(__udelay) },
	{ 0x48b5783f, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v00001AEDd00001000sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001AEDd00001001sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001AEDd00001003sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001AEDd00001004sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001AEDd00001005sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001AEDd00001006sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001AEDd00001007sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001AEDd00001008sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001AEDd00002001sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "26FD9919E3513A5C620DFC2");
