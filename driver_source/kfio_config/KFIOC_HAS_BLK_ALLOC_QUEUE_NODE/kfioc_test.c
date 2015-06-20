
#include <linux/module.h>

#include <linux/blkdev.h>

void kfioc_has_blk_alloc_queue_node(void)
{
    struct request_queue *rq = NULL;
    rq = blk_alloc_queue_node(GFP_NOIO, -1);
}



MODULE_LICENSE("Proprietary");

