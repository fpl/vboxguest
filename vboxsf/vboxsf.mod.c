#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/export-internal.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif


static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xe384a98d, "super_setup_bdi_name" },
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0x55ffd818, "truncate_inode_pages" },
	{ 0x67467e18, "filemap_fdatawrite" },
	{ 0xcb829628, "generic_fillattr" },
	{ 0x76c22ea4, "setattr_prepare" },
	{ 0x29b28905, "iget_locked" },
	{ 0xa1690db5, "VBoxGuest_RTLogBackdoorPrintf" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x9177b5d1, "d_instantiate" },
	{ 0x428148ee, "_copy_to_iter" },
	{ 0xfc1a68a7, "clear_inode" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x84156851, "fs_param_is_string" },
	{ 0xbaa2df8b, "VBoxGuestIDC" },
	{ 0xc573d276, "unregister_filesystem" },
	{ 0x2875a315, "utf32_to_utf8" },
	{ 0xf2f2bf34, "iov_iter_single_seg_count" },
	{ 0x1798dd6, "iov_iter_advance" },
	{ 0x28599c7f, "d_make_root" },
	{ 0x2b34bd09, "invalidate_mapping_pages" },
	{ 0xcf2a6966, "up" },
	{ 0x28b2de74, "iov_iter_get_pages2" },
	{ 0xcfba2f70, "VBoxGuest_RTSemFastMutexRequest" },
	{ 0x69acdf38, "memcpy" },
	{ 0xe8a5fb8d, "iunique" },
	{ 0x37a0cba, "kfree" },
	{ 0x4823dd72, "finish_open" },
	{ 0xb8bd3dd7, "iput" },
	{ 0x513bb0e2, "VBoxGuest_RTSemFastMutexRelease" },
	{ 0xa5d070ac, "VBoxGuest_RTStrNLen" },
	{ 0xbd1262e8, "fs_param_is_enum" },
	{ 0x5f6dac04, "logfc" },
	{ 0xa8f22c42, "__put_devmap_managed_page_refs" },
	{ 0xd9486c38, "iter_file_splice_write" },
	{ 0xdb060676, "register_filesystem" },
	{ 0xfe7ea0a2, "VBoxGuest_RTLogRelGetDefaultInstanceEx" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xddd1cfc, "VBoxGuest_RTStrCopy" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x1f70d065, "VBoxGuest_RTErrConvertToErrno" },
	{ 0x15751bdd, "get_tree_nodev" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x23d28a65, "fs_param_is_u32" },
	{ 0x73799876, "d_drop" },
	{ 0xc16a2250, "unlock_new_inode" },
	{ 0x92997ed8, "_printk" },
	{ 0x8a7d1c31, "high_memory" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x68e0c09a, "load_nls" },
	{ 0x443e7e08, "make_kuid" },
	{ 0x864cafb4, "generic_file_mmap" },
	{ 0xa916b694, "strnlen" },
	{ 0x876aae08, "ilookup" },
	{ 0x80617cdc, "VBoxGuest_RTSemFastMutexCreate" },
	{ 0xc280d35c, "VBoxGuest_RTSemFastMutexDestroy" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x94bf03ca, "utf8_to_utf32" },
	{ 0xbcb36fe4, "hugetlb_optimize_vmemmap_key" },
	{ 0x7fd91f, "mark_page_accessed" },
	{ 0x887ae4b9, "seq_escape_mem" },
	{ 0x99f10ac0, "generic_parse_monolithic" },
	{ 0xf40683b9, "VBoxGuest_RTMemContFree" },
	{ 0xd4654f55, "VBoxGuest_RTSemMutexRelease" },
	{ 0x57bc19d2, "down_write" },
	{ 0xce807a25, "up_write" },
	{ 0xf5540edc, "generic_file_read_iter" },
	{ 0x51cdca3a, "unlock_page" },
	{ 0xd5c66d89, "VBoxGuest_rtR0MemObjLinuxVirtToPage" },
	{ 0x7d059974, "set_nlink" },
	{ 0x1a79c8e9, "__x86_indirect_thunk_r13" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xb8df2b3a, "VBoxGuest_RTAssertShouldPanic" },
	{ 0x67a19cab, "simple_write_begin" },
	{ 0xb9d10cd, "current_task" },
	{ 0xfb2830be, "finish_no_open" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xf81cb155, "VBoxGuest_RTLogLoggerEx" },
	{ 0xfb578fc5, "memset" },
	{ 0x31549b2a, "__x86_indirect_thunk_r10" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x112d5cc9, "make_kgid" },
	{ 0xa4582b8e, "VBoxGuest_RTMemContAlloc" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x41d73c16, "set_page_dirty" },
	{ 0x676b986e, "VBoxGuest_RTSemMutexRequest" },
	{ 0x720835a5, "VBoxGuest_RTSemMutexCreate" },
	{ 0x889c3ac9, "VBoxGuest_RTSemMutexDestroy" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x885eff4e, "generic_read_dir" },
	{ 0xa0e58740, "d_add" },
	{ 0xf618ba94, "filemap_fdatawait_range" },
	{ 0x52b41c7f, "__folio_put" },
	{ 0x916e42f0, "VBoxGuest_RTAssertMsg1Weak" },
	{ 0x53959fab, "seq_printf" },
	{ 0x6bd0e573, "down_interruptible" },
	{ 0x98548305, "_copy_from_iter" },
	{ 0x3b3b731, "generic_file_open" },
	{ 0xac368a4d, "filemap_dirty_folio" },
	{ 0xa54cd23c, "pagecache_get_page" },
	{ 0xc12c92fb, "is_bad_inode" },
	{ 0xe5c43f8e, "seq_puts" },
	{ 0x7a2ea18b, "__fs_parse" },
	{ 0xb8b043f2, "kfree_link" },
	{ 0x7891ec36, "kill_anon_super" },
	{ 0x4c1b64b8, "kmalloc_trace" },
	{ 0x2d95917b, "__generic_file_fsync" },
	{ 0x754d539c, "strlen" },
	{ 0xa40e45cd, "param_ops_int" },
	{ 0x7bb0417e, "iov_iter_revert" },
	{ 0xca8beb29, "generic_file_llseek" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x4c765808, "unload_nls" },
	{ 0x6e8541b7, "VBoxGuest_RTAssertMsg2Weak" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x767648eb, "kmalloc_caches" },
	{ 0xdeeeabd7, "bdi_set_max_ratio" },
	{ 0x9b9daf0, "module_layout" },
};

MODULE_INFO(depends, "vboxguest");


MODULE_INFO(srcversion, "FE8FE7157871AC482C8D98C");
