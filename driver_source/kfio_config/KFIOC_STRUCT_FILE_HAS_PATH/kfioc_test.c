
#include <linux/module.h>

#include <linux/fs.h>

void kfioc_test_file_path(void) {
    struct file f = { .f_path = { [0] = 0, [1] = 0 } };
    (void)f;
}



MODULE_LICENSE("Proprietary");

