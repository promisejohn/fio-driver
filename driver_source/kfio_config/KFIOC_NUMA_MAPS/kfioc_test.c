
#include <linux/module.h>

#include <linux/sched.h>
#include <linux/cpumask.h>
const cpumask_t *kfioc_check_numa_maps(void)
{
    return cpumask_of_node(0);
}



MODULE_LICENSE("Proprietary");

