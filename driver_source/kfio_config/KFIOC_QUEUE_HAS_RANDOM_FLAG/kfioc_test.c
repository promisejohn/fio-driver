
#include <linux/module.h>

#include <linux/blkdev.h>
void kfioc_check_random_flag(void)
{
    queue_flag_clear_unlocked(QUEUE_FLAG_ADD_RANDOM, NULL);
}



MODULE_LICENSE("Proprietary");

