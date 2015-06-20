
#include <linux/module.h>

#include <linux/fs.h>
void foo(void)
{
    struct file_operations fops;
    fops.ioctl = NULL;
}



MODULE_LICENSE("Proprietary");

