
#include <linux/module.h>

#include <linux/sysrq.h>

int kfioc_test_sysrq_key_op(void) {
    struct sysrq_key_op op = {};
    return op.enable_mask;
}



MODULE_LICENSE("Proprietary");

