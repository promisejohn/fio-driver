
#include <linux/module.h>

#include <linux/bio.h>

void kfioc_test_bio_hw_segments(void) {
	struct bio bio;
	bio.bi_hw_segments=0;
	bio.bi_hw_front_size=0;
	bio.bi_hw_back_size=0;



MODULE_LICENSE("Proprietary");

