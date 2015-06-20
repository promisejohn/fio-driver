
#include <linux/module.h>

#include <linux/highmem.h>
void kmap_atomic_needs_type(void)
{
    kmap_atomic(NULL, 0);
}



MODULE_LICENSE("Proprietary");

