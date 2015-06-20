
#include <linux/module.h>

#include <linux/sched.h>
void kfioc_check_task_has_nr_cpus_allowed(void)
{
    struct task_struct *tsk = NULL;
    tsk->rt.nr_cpus_allowed = 0;
}



MODULE_LICENSE("Proprietary");

