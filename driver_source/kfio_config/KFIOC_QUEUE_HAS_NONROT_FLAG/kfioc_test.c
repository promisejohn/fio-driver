
#include <linux/module.h>

#include <linux/blkdev.h>
void kfioc_check_nonrot_flag(void)
{
    queue_flag_set_unlocked(QUEUE_FLAG_NONROT, NULL);
}



MODULE_LICENSE("Proprietary");

