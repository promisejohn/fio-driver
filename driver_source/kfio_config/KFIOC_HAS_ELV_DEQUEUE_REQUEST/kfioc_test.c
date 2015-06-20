
#include <linux/module.h>

#include <linux/version.h>
#if LINUX_VERSION_CODE > KERNEL_VERSION(2,6,24)
#error elv_dequeue_request is either GPL or doesnt exist
#endif



MODULE_LICENSE("Proprietary");

