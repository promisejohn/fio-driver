
#include <linux/module.h>

#include <linux/blkdev.h>

void kfioc_has_blk_queue_hardsect_size(void){
    struct request_queue *rq = NULL;
    blk_queue_hardsect_size(rq, 512);
}



MODULE_LICENSE("Proprietary");

