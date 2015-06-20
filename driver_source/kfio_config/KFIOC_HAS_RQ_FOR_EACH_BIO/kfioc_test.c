
#include <linux/module.h>

#include <linux/blkdev.h>
void foo(void)
{
    struct bio *lbio;
    struct request *req = NULL;

    __rq_for_each_bio(lbio, req)
    {
    }
}



MODULE_LICENSE("Proprietary");

