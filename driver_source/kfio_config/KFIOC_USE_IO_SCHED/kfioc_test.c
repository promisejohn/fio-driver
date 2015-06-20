
#include <linux/module.h>

#include <linux/version.h>
#if LINUX_VERSION_CODE > KERNEL_VERSION(2,6,24)
#if LINUX_VERSION_CODE < KERNEL_VERSION(2,6,31)
#error Cant use elevator due to required GPL symbol
#endif
#endif

#include <linux/blkdev.h>
void kfioc_use_io_sched(void) {
    blk_complete_request(NULL);
}



MODULE_LICENSE("Proprietary");

