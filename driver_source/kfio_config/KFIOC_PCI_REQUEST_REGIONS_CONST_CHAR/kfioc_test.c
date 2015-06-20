
#include <linux/module.h>

#include <linux/pci.h>
int kfioc_pci_request_regions_const_param(void)
{
    return pci_request_regions(NULL, (const char *) "foo");
}



MODULE_LICENSE("Proprietary");

