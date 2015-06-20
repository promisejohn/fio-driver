
#include <linux/module.h>

#include <linux/blkdev.h>
int foo(void)
{
    return (REQ_RW_SYNC);
}



MODULE_LICENSE("Proprietary");

