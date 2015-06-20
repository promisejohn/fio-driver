
#include <linux/module.h>

#include <scsi/scsi_cmnd.h>
struct scatterlist;

void kfioc_has_scsi_resid_fns(void)
{
    struct scsi_cmnd *scmd = NULL;
    scsi_set_resid(scmd, 0);
}



MODULE_LICENSE("Proprietary");

