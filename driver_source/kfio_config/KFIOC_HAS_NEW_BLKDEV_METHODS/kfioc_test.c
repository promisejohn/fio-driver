
#include <linux/module.h>

#include <linux/fs.h>
void kfioc_has_new_blkdev_methods(void)
{
    (void)blkdev_get_by_path("foo", 0, NULL);
}



MODULE_LICENSE("Proprietary");

