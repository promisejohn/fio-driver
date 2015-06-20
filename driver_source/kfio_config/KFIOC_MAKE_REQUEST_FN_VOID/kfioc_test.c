
#include <linux/module.h>

#include <linux/blkdev.h>
static void my_make_request_fn(struct request_queue *q, struct bio *bio)
{
}
void test_make_request_fn(void)
{
    blk_queue_make_request(NULL, my_make_request_fn);
}



MODULE_LICENSE("Proprietary");

