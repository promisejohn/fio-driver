
#include <linux/module.h>

#include <linux/buffer_head.h>

void kfioc_test_invalidate_bdev(void) {
    invalidate_bdev(NULL);
}



MODULE_LICENSE("Proprietary");

