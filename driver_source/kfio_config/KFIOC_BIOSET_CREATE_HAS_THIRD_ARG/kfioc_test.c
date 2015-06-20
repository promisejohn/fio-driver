
#include <linux/module.h>

#include <linux/bio.h>
void foo(void)
{
    bioset_create(0,0,0);
}



MODULE_LICENSE("Proprietary");

