
#include <linux/module.h>

#include <linux/bio.h>

void kfioc_test_bio_rw_unplug_flag(void) {
	struct bio bio;
	bio.bi_rw = 1 << BIO_RW_UNPLUG;
}



MODULE_LICENSE("Proprietary");

