
#include <linux/module.h>

#include <linux/blkdev.h>

void kfioc_test_backing_dev_info_unplug(void) {
    struct backing_dev_info q = { .unplug_io_fn = NULL };
    (void)q;
}



MODULE_LICENSE("Proprietary");

