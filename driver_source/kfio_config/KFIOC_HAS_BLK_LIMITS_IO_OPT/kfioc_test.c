
#include <linux/module.h>

#include <linux/blkdev.h>
void kfioc_has_blk_limits_io_opt(void)
{
    blk_limits_io_opt(NULL, 0);
}



MODULE_LICENSE("Proprietary");

