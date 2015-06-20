
#include <linux/module.h>

#include <linux/bio.h>
void foo(void)
{
    unsigned long flags = 1 << BIO_RW_DISCARD;
}



MODULE_LICENSE("Proprietary");

