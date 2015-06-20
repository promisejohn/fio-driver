
#include <linux/module.h>

#include <linux/proc_fs.h>

void *kfioc_has_procfs_pde_data(struct inode *inode)
{
    return PDE_DATA(inode);
}



MODULE_LICENSE("Proprietary");

