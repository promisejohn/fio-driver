
#include <linux/module.h>

#include <scsi/scsi_host.h>
#include <scsi/scsi_cmnd.h>

int myfunc(struct Scsi_Host *shost, struct scsi_cmnd *scmd){
    return 0;
}

struct scsi_host_template testtemplate = {
    .queuecommand = myfunc
};



MODULE_LICENSE("Proprietary");

