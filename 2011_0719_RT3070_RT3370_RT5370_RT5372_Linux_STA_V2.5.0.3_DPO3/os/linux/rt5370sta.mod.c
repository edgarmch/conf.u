#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
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
	{ 0x3b69997a, "module_layout" },
	{ 0x61102767, "kill_pid" },
	{ 0xcd466ac0, "usb_deregister" },
	{ 0x9df96cd7, "usb_register_driver" },
	{ 0xb3cac4bc, "usb_get_dev" },
	{ 0x41b10bf3, "netif_device_detach" },
	{ 0x541f6d58, "usb_put_dev" },
	{ 0x801678, "flush_scheduled_work" },
	{ 0x7a1dea15, "dev_set_drvdata" },
	{ 0x10e002db, "netif_device_attach" },
	{ 0xc1afc80c, "dev_get_drvdata" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb5dcab5b, "remove_wait_queue" },
	{ 0x5860aad4, "add_wait_queue" },
	{ 0xffd5a395, "default_wake_function" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x47939e0d, "__tasklet_hi_schedule" },
	{ 0x9c44f11e, "usb_submit_urb" },
	{ 0x71e3cecb, "up" },
	{ 0x45d40463, "usb_control_msg" },
	{ 0xf22449ae, "down_interruptible" },
	{ 0xf6fad048, "usb_free_coherent" },
	{ 0x70f9a21, "usb_free_urb" },
	{ 0x92f0769e, "usb_kill_urb" },
	{ 0x9f2c6399, "usb_alloc_coherent" },
	{ 0x9cc570c3, "usb_alloc_urb" },
	{ 0x72aa82c6, "param_ops_charp" },
	{ 0x359237e6, "module_put" },
	{ 0x317a2155, "netif_carrier_off" },
	{ 0xcbf0beee, "__netif_schedule" },
	{ 0x845d3c1a, "netif_carrier_on" },
	{ 0x3032758b, "__tracepoint_module_get" },
	{ 0x6b739471, "wake_up_process" },
	{ 0x6cadc7a6, "kthread_create_on_node" },
	{ 0x48667c73, "kthread_stop" },
	{ 0xd5f2172f, "del_timer_sync" },
	{ 0x8834396c, "mod_timer" },
	{ 0xfb0e29f, "init_timer_key" },
	{ 0xbe2c0274, "add_timer" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x6c2470f7, "register_netdev" },
	{ 0x4b63c529, "register_netdevice" },
	{ 0x999e8297, "vfree" },
	{ 0x90125b84, "unregister_netdev" },
	{ 0x6f78b8c6, "dev_get_by_name" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x7d201d9e, "alloc_etherdev_mqs" },
	{ 0xf4c9fa9, "free_netdev" },
	{ 0x54b4a47f, "dev_close" },
	{ 0x222103c8, "wireless_send_event" },
	{ 0x1000e51, "schedule" },
	{ 0xd2965f6f, "kthread_should_stop" },
	{ 0x6cabb0a2, "filp_close" },
	{ 0x2e8a5b93, "filp_open" },
	{ 0xebec7345, "pskb_expand_head" },
	{ 0x5c763881, "netif_rx" },
	{ 0xfb74d1df, "eth_type_trans" },
	{ 0x8d04c591, "skb_pull" },
	{ 0xca4ee268, "skb_trim" },
	{ 0xfae85305, "skb_push" },
	{ 0x529ae9b3, "skb_copy_expand" },
	{ 0x6044c9bf, "__alloc_skb" },
	{ 0xfb11d0a8, "skb_clone" },
	{ 0x30999869, "dev_kfree_skb_any" },
	{ 0x1d168541, "skb_put" },
	{ 0xdebc5a27, "dev_alloc_skb" },
	{ 0x37a0cba, "kfree" },
	{ 0x5a34a45c, "__kmalloc" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x42224298, "sscanf" },
	{ 0x4f6b400b, "_copy_from_user" },
	{ 0xe914e41e, "strcpy" },
	{ 0x7ec9bfbc, "strncpy" },
	{ 0x61651be, "strcat" },
	{ 0x9a1dfd65, "strpbrk" },
	{ 0x3fa913da, "strspn" },
	{ 0xcf21d241, "__wake_up" },
	{ 0x8f64aa4, "_raw_spin_unlock_irqrestore" },
	{ 0x9327f5ce, "_raw_spin_lock_irqsave" },
	{ 0x85df9b6c, "strsep" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x11089ac7, "_ctype" },
	{ 0x349cba85, "strchr" },
	{ 0xfa66f77c, "finish_wait" },
	{ 0xd62c833f, "schedule_timeout" },
	{ 0x5c8b5ce8, "prepare_to_wait" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0x6395be94, "__init_waitqueue_head" },
	{ 0x4f8b5ddb, "_copy_to_user" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x4c4fef19, "kernel_stack" },
	{ 0x9db7a936, "current_task" },
	{ 0xb742fd7, "simple_strtol" },
	{ 0x50720c5f, "snprintf" },
	{ 0x91715312, "sprintf" },
	{ 0x25ec1b28, "strlen" },
	{ 0xba63339c, "_raw_spin_unlock_bh" },
	{ 0x1637ff0f, "_raw_spin_lock_bh" },
	{ 0x7d11c268, "jiffies" },
	{ 0x2fa5a500, "memcmp" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x27e1a049, "printk" },
	{ 0x236c8c64, "memcpy" },
	{ 0xa3a5be95, "memmove" },
	{ 0xde0bdcff, "memset" },
	{ 0xb4390f9a, "mcount" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v148Fp3070d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v148Fp3071d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v148Fp3072d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0DB0p3820d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0DB0p871Cd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0DB0p822Cd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0DB0p871Bd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0DB0p822Bd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0DF6p003Ed*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0DF6p0042d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0DF6p0048d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0DF6p0047d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0DF6p005Fd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v14B2p3C12d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v18C5p0012d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v083Ap7511d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v083ApA701d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v083ApA702d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1740p9703d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1740p9705d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1740p9706d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1740p9707d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1740p9708d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1740p9709d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v13D3p3273d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v13D3p3305d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1044p800Dd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v2019pAB25d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v2019p5201d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v07B8p3070d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v07B8p3071d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v07B8p3072d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v7392p7711d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v7392p4085d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1A32p0304d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1EDAp2310d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v07D1p3C0Ad*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v07D1p3C0Dd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v07D1p3C0Ed*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v07D1p3C0Fd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v07D1p3C16d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v07D1p3C17d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1D4Dp000Cd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1D4Dp000Ed*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1D4Dp0011d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v5A57p5257d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v5A57p0283d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v04BBp0945d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v04BBp0947d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v04BBp0948d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v203Dp1480d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v20B8p8888d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0B05p1784d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v203Dp14A9d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0DB0p899Ad*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0DB0p3870d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0DB0p870Ad*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0DB0p6899d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0DB0p3822d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0DB0p3871d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0DB0p871Ad*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0DB0p822Ad*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0DB0p3821d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0DB0p821Ad*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v5A57p0282d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v083ApA703d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v13D3p3307d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v13D3p3321d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v07FAp7712d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0789p0166d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0586p341Ad*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0586p341Ed*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0586p343Ed*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1EDAp2012d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v148Fp3370d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0DF6p0050d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v148Fp5370d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v148Fp5372d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v13D3p3365d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v13D3p3329d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v2001p3C15d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v2001p3C19d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v2001p3C1Cd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v2001p3C1Dd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v043Ep7A12d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v043Ep7A22d*dc*dsc*dp*ic*isc*ip*");

MODULE_INFO(srcversion, "B5F68EDB8F10C7E19E04080");
