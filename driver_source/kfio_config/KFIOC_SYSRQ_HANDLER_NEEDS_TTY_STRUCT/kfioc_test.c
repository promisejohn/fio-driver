
#include <linux/module.h>

#include <linux/version.h>
#if LINUX_VERSION_CODE >= KERNEL_VERSION(2,6,36)
#error "sysrq handlers do not need tty_struct."
#endif



MODULE_LICENSE("Proprietary");

