
#include <linux/module.h>

#include <linux/workqueue.h>

struct work_struct *wq;
work_func_t func;

void tst(void)
{
    INIT_WORK(wq, func);
}



MODULE_LICENSE("Proprietary");

