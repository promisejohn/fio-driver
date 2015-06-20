
#include <linux/module.h>

#include <linux/bio.h>
    
void kfioc_test_bio_endio(void) {
    bio_endio(NULL, 0);
}



MODULE_LICENSE("Proprietary");

