
#include <linux/module.h>

int kfioc_test_mutex_subsystem(void) {
    struct mutex lock;
    mutex_init(&lock);
    return 0;
}



MODULE_LICENSE("Proprietary");

