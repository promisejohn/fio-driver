
#include <linux/module.h>

#include <linux/blkdev.h>

void kfioc_test_blk_delay_queue(void)
{
    blk_delay_queue(NULL, 0);
}



MODULE_LICENSE("Proprietary");

