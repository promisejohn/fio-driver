
#include <linux/module.h>

#include <linux/bio.h>
void bvec_kmap_irq_has_long_flags(void)
{
    unsigned long flags;

    bvec_kmap_irq(NULL, &flags);
}



MODULE_LICENSE("Proprietary");

