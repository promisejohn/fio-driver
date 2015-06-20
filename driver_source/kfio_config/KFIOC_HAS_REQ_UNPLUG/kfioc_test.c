
#include <linux/module.h>

#include <linux/fs.h>

void kfioc_test_req_unplug_flag(void) {
	struct bio bio;
	bio.bi_rw = REQ_UNPLUG;
}



MODULE_LICENSE("Proprietary");

