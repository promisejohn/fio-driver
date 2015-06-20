
#include <linux/module.h>

#include <linux/slab.h>
    
void kfioc_test_kmem_cache_create(void) {
    kmem_cache_create("foo", 0, 0, 0, NULL);
}



MODULE_LICENSE("Proprietary");

