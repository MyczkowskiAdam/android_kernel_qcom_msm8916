/* Copyright (c) 2012 LG Electronics. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */
#ifndef __MACH_LGE_HANDLE_PANIC_H
#define __MACH_LGE_HANDLE_PANIC_H

/*                                     */
#define LGE_RB_MAGIC    0x6D630000

#define LGE_ERR_KERN    0x0100
#define LGE_ERR_RPM     0x0200
#define LGE_ERR_TZ      0x0300
#define LGE_ERR_DBI     0x0400
#define LGE_LAF_CRASH   0x0500

#define LGE_SUB_ADSP    0x1000
#define LGE_SUB_MBA     0x2000
#define LGE_SUB_MODEM   0x3000
#define LGE_SUB_WCNSS   0x4000

#define LGE_ERR_SUB_SD  0x0001
#define LGE_ERR_SUB_RST 0x0002
#define LGE_ERR_SUB_UNK 0x0003
#define LGE_ERR_SUB_PWR 0x0004

#define LGE_ERR_RPM_ERR 0x0000
#define LGE_ERR_RPM_WDT 0x0001

#define LGE_ERR_TZ_SEC_WDT     0x0000
#define LGE_ERR_TZ_NON_SEC_WDT 0x0001
#define LGE_ERR_TZ_ERR         0x0002
#define LGE_ERR_TZ_WDT_BARK    0x0003

#define LAF_DLOAD_MODE   0x6C616664 /* lafd */

void lge_set_subsys_crash_reason(const char *name, int type);
void lge_set_ram_console_addr(unsigned int addr, unsigned int size);
void lge_set_panic_reason(void);
void lge_set_fb_addr(unsigned int addr);
void lge_set_restart_reason(unsigned int);

#endif
