
#include <linux/module.h>

#include <linux/blkdev.h>

void kfioc_test_request_queue_unplug_param(blk_plug_cb_fn cb) {
    cb(NULL, false);
}



MODULE_LICENSE("Proprietary");

