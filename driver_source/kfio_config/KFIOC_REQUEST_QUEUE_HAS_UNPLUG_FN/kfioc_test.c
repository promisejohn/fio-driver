
#include <linux/module.h>

#include <linux/blkdev.h>

void kfioc_test_request_queue_unplug(void) {
    struct request_queue q = { .unplug_fn = NULL };
    (void)q;
}



MODULE_LICENSE("Proprietary");

