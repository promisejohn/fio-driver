
#include <linux/module.h>

#include <linux/fs.h>
#include <linux/blkdev.h>

int myfunc(struct block_device_operations *testops){
    return testops->release(NULL, 0);
}



MODULE_LICENSE("Proprietary");

