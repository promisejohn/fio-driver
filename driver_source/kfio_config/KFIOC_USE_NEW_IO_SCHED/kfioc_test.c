
#include <linux/module.h>

#include <linux/blkdev.h>
void kfioc_has_new_sched(void) {
    blk_fetch_request(NULL);
}



MODULE_LICENSE("Proprietary");

