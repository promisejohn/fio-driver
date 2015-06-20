
#include <linux/module.h>

#include <linux/bio.h>

void kfioc_test_bio_destructor(void) {
	struct bio bio;
	bio.bi_destructor=NULL;



MODULE_LICENSE("Proprietary");

