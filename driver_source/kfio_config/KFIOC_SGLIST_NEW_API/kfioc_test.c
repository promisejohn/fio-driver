
#include <linux/module.h>

#include <linux/scatterlist.h>
void support_sglist_new_api(void)
{
    struct scatterlist *sl = NULL;

    sg_set_page(sl, sg_page(sl), 0, 0);
}



MODULE_LICENSE("Proprietary");

