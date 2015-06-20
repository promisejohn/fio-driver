
#include <linux/module.h>

#include <linux/blkdev.h>

void kfioc_test_blk_unplug(void) {
    blk_unplug(NULL);
}



MODULE_LICENSE("Proprietary");

