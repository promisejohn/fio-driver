
#include <linux/module.h>

#include <linux/blkdev.h>


void kfioc_test_blk_queue_set_discard(void) {
	queue_flag_set_unlocked(QUEUE_FLAG_DISCARD,NULL);
}



MODULE_LICENSE("Proprietary");

