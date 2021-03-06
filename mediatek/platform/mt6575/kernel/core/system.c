#include <linux/kernel.h>
#include <linux/string.h>

#include <mach/mtk_rtc.h>
extern void wdt_arch_reset(char);

void arch_reset(char mode, const char *cmd)
{
    char reboot = 0;
    printk("arch_reset: cmd = %s\n", cmd ? : "NULL");

    if (cmd && !strcmp(cmd, "charger")) {
        /* do nothing */
    } else if (cmd && !strcmp(cmd, "recovery")) {
        rtc_mark_recovery();
    } else {
    	reboot = 1;
    }
    
    wdt_arch_reset(reboot);
}

