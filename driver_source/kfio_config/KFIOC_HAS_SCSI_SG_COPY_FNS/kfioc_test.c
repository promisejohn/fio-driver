
#include <linux/module.h>

#include <scsi/scsi_cmnd.h>

void kfioc_has_scsi_sg_copy_fns(void)
{
    struct scsi_cmnd *scmd = NULL;
    int one = scsi_sg_copy_from_buffer(scmd, NULL, 0);
    int two = scsi_sg_copy_to_buffer(scmd, NULL, 0);
}



MODULE_LICENSE("Proprietary");

