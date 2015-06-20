
#include <linux/module.h>

#include <linux/blkdev.h>

void kfioc_has_end_request(void){
    end_that_request_first(NULL, 0, 0);
}



MODULE_LICENSE("Proprietary");

