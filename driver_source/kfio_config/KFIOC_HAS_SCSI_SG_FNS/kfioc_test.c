
#include <linux/module.h>

#include <scsi/scsi_cmnd.h>
struct scatterlist;

void kfioc_has_scsi_sg_fns(void)
{
    struct scsi_cmnd *scmd = NULL;
    struct scatterlist *one = scsi_sglist(scmd);
    unsigned two = scsi_sg_count(scmd);
}



MODULE_LICENSE("Proprietary");

