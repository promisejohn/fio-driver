
#include <linux/module.h>

#include <linux/blkdev.h>
void kfioc_hew_barrier_scheme(void)
{
    struct request_queue q;

    q.flush_flags = REQ_FLUSH | REQ_FUA;
}



MODULE_LICENSE("Proprietary");

