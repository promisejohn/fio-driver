
#include <linux/module.h>

#include <linux/blkdev.h>
void has_queue_flag_clear_unlocked(void)
{
     struct request_queue q;
     queue_flag_clear_unlocked(0, &q);
}



MODULE_LICENSE("Proprietary");

