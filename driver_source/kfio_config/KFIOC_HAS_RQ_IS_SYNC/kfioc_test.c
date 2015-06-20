
#include <linux/module.h>

#include <linux/blkdev.h>
void foo(void)
{
    struct request *req = NULL;

    rq_is_sync(req);
}



MODULE_LICENSE("Proprietary");

