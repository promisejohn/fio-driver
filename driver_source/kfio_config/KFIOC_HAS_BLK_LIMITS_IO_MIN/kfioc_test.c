
#include <linux/module.h>

#include <linux/blkdev.h>
void kfioc_has_blk_limits_io_min(void)
{
    blk_limits_io_min(NULL, 0);
}



MODULE_LICENSE("Proprietary");

