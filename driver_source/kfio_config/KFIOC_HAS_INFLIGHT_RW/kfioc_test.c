
#include <linux/module.h>

#include <linux/blkdev.h>
void kfioc_has_inflight_rw_stats(void)
{
    struct gendisk gd;
    gd.part0.in_flight[0] = 0;
}



MODULE_LICENSE("Proprietary");

