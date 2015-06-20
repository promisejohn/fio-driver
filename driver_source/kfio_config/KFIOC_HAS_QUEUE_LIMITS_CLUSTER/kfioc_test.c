
#include <linux/module.h>

#include <linux/blkdev.h>
void has_queue_limits_cluster(void)
{
     struct request_queue q;
     q.limits.cluster = 0;
     printk("%d", q.limits.cluster);
}



MODULE_LICENSE("Proprietary");

