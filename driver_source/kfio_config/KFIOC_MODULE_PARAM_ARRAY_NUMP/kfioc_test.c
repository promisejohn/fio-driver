
#include <linux/module.h>

const char *test[10];

module_param_array(test, charp, NULL, 0);



MODULE_LICENSE("Proprietary");

