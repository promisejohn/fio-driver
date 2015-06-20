
#include <linux/module.h>

#include <linux/fs.h>
#include <linux/blkdev.h>

int myfunc(struct block_device *bdev, fmode_t mode){
    return 0;
}

struct block_device_operations testops = {
    .open = myfunc
};



MODULE_LICENSE("Proprietary");

