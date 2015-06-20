
#include <linux/module.h>

#include <linux/blkdev.h>

void kfioc_test_blk_queue_discard_granularity(void)
{
    struct request_queue q;

    q.limits.discard_granularity = 0;
}



MODULE_LICENSE("Proprietary");

