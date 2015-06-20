
#include <linux/module.h>

#include <linux/blkdev.h>
int has_queue_flag_cluster(void)
{
    return QUEUE_FLAG_CLUSTER ? 1 : 0;
}



MODULE_LICENSE("Proprietary");

