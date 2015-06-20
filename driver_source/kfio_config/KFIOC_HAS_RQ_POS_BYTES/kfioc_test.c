
#include <linux/module.h>

#include <linux/blkdev.h>
void foo(void)
{
    struct request *req = NULL;
    sector_t foo;

    foo = blk_rq_pos(req);
}



MODULE_LICENSE("Proprietary");

