
#include <linux/module.h>

#include <linux/pci.h>
#include <linux/device.h>
int kfioc_pci_has_numa_info(void)
{
    struct pci_dev pdev = { };

    return dev_to_node(&pdev.dev);
}



MODULE_LICENSE("Proprietary");

