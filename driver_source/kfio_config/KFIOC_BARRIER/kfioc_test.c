
#include <linux/module.h>

#include <linux/blkdev.h>


void kfioc_test_blk_queue_set_discard(void) {
	(void) blk_queue_ordered(NULL,QUEUE_ORDERED_NONE, NULL);
	(void) blk_queue_ordered(NULL,QUEUE_ORDERED_TAG, NULL);
	(void) blk_queue_ordered(NULL,QUEUE_ORDERED_TAG_FLUSH, NULL);
}



MODULE_LICENSE("Proprietary");

