
#include <linux/module.h>

#include <linux/slab.h>

struct kfioc_test_kmem_cache {
    int junk;
};

void kfioc_test_kmem_cache(void) {
    struct kfioc_test_kmem_cache c;
    kmem_cache_destroy((struct kmem_cache *) &c);
    return;
}



MODULE_LICENSE("Proprietary");

