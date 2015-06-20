
#include <linux/module.h>

#include <linux/proc_fs.h>

void kfioc_owner_in_struct_proc_dir_entry(void) {
    struct proc_dir_entry dentry = { .owner = NULL };
    (void)dentry;
}



MODULE_LICENSE("Proprietary");

