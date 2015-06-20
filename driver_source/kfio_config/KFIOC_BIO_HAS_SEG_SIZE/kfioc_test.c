
#include <linux/module.h>

#include <linux/bio.h>

void kfioc_test_bio_seg_size(void) {
	struct bio bio;
	bio.bi_seg_front_size=0;
	bio.bi_seg_back_size=0;



MODULE_LICENSE("Proprietary");

