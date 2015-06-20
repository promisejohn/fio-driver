
#include <linux/module.h>

#include <linux/fs.h>
#include <linux/namei.h>
void kfioc_has_path_lookup(void)
{
    (void) path_lookup("foo", 0, NULL);
}



MODULE_LICENSE("Proprietary");

