
#include <linux/module.h>

#include <linux/blkdev.h>
#include <linux/atomic.h>
void kfioc_has_inflight_rw_atomic(void)
{
    struct gendisk gd;
    atomic_set(&gd.part0.in_flight[0], 0);
}



MODULE_LICENSE("Proprietary");

