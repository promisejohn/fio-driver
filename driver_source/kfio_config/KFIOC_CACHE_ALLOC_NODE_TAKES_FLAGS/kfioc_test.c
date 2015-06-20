
#include <linux/module.h>

#include <linux/slab.h>
void kfioc_kmem_cache_alloc_node_takes_flags(void)
{
    kmem_cache_alloc_node(0, GFP_KERNEL, 0);
}



MODULE_LICENSE("Proprietary");

