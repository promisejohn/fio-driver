
#include <linux/module.h>

#include <linux/blkdev.h>
void has_bio_comp_cpu(void)
{
    struct bio bio;

    bio.bi_comp_cpu = 0;
}



MODULE_LICENSE("Proprietary");

