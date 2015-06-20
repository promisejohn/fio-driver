
#include <linux/module.h>

#include <linux/blkdev.h>
int kfioc_has_blk_fs_request(struct request *req)
{
    return blk_fs_request(req);
}



MODULE_LICENSE("Proprietary");

