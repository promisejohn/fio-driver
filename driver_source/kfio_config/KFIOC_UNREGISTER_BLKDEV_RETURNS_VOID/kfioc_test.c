
#include <linux/module.h>

#include <linux/fs.h>

int kfioc_test_unregister_blkdev(void) {
    int rc = 0;
    rc = unregister_blkdev(0, NULL);
    return rc;
}



MODULE_LICENSE("Proprietary");

