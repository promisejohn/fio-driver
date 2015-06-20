
#include <linux/module.h>

#include <linux/bio.h>

void kfioc_test_has_biovec_iterators(void) {
        struct bvec_iter bvec_i;
        bvec_i.bi_sector = 0;
}



MODULE_LICENSE("Proprietary");

