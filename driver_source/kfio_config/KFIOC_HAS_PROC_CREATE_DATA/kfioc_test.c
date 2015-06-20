
#include <linux/module.h>

#include <linux/proc_fs.h>

void *kfioc_has_proc_create_data(struct inode *inode)
{
    return proc_create_data(NULL, 0, NULL, NULL, NULL);
}



MODULE_LICENSE("Proprietary");

