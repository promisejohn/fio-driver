
#include <linux/module.h>

#include <linux/sched.h>
void kfioc_check_task_has_bound_flag(void)
{
    struct task_struct *tsk = NULL;
    tsk->flags |= PF_THREAD_BOUND;
}



MODULE_LICENSE("Proprietary");

