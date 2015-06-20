
#include <linux/module.h>

#include <linux/fs.h>
#include <linux/blkdev.h>

long myfunc(struct file *file, unsigned cmd, unsigned long arg){
    return 0L;
}

struct file_operations testops = {
    .compat_ioctl = myfunc
};



MODULE_LICENSE("Proprietary");

