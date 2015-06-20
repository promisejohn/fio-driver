
#include <linux/module.h>

#include <linux/blkdev.h>
void kfioc_has_bio_rw_flagged(void)
{
    (void)bio_rw_flagged(NULL, BIO_RW_SYNCIO);
}



MODULE_LICENSE("Proprietary");

