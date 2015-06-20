
#include <linux/module.h>

#include <linux/blkdev.h>
void kfioc_test_blk_request_queue_discard_zeroes_data(void) {
    struct request_queue q;
    q.limits.discard_zeroes_data = 1;
}



MODULE_LICENSE("Proprietary");

