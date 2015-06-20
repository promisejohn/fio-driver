
#include <linux/module.h>

#include <linux/blkdev.h>
void kfioc_check_kblockd_queue_arg(void)
{
    kblockd_schedule_work(NULL, NULL);
}



MODULE_LICENSE("Proprietary");

