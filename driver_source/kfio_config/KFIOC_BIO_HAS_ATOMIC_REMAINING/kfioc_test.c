
#include <linux/module.h>

#include <linux/bio.h>

void kfioc_test_bio_remaining(void) {
struct bio bio;
atomic_set(&(bio.bi_remaining),0);



MODULE_LICENSE("Proprietary");

