
#include <linux/module.h>

#include <linux/blkdev.h>
void kfioc_has_blk_queue_max_segments(void)
{
    blk_queue_max_segments(NULL, 0);
}



MODULE_LICENSE("Proprietary");

