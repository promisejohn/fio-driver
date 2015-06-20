
#include <linux/module.h>

#include <asm/irq_regs.h>

struct pt_regs *kfioc_set_irq_regs(void) {
    return get_irq_regs();
}



MODULE_LICENSE("Proprietary");

