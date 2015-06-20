
#include <linux/module.h>

#include <linux/genhd.h>

void kfioc_test_disk_stats(void) {
    struct disk_stats stat = { .sectors = { [0] = 0, [1] = 0 } };
    (void)stat;
}



MODULE_LICENSE("Proprietary");

