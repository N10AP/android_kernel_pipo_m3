/*
 * Copyright (C) 2010-2012 ARM Limited. All rights reserved.
 * 
 * This program is free software and is provided to you under the terms of the GNU General Public License version 2
 * as published by the Free Software Foundation, and any use by you of this program is subject to the terms of such GNU licence.
 * 
 * A copy of the licence is included with the program, and can also be obtained from Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 */

#ifndef __ARCH_CONFIG_H__
#define __ARCH_CONFIG_H__

/* Configuration for the rk30sdk board */

/*
10090000-10090097 : Mali-400 GP
10091000-1009102f : Mali-400 L2 cache
10093000-10093023 : Mali-400 MMU for GP
10094000-10094023 : Mali-400 MMU for PP 0
10095000-10095023 : Mali-400 MMU for PP 1
10096000-10096023 : Mali-400 MMU for PP 2
10097000-10097023 : Mali-400 MMU for PP 3
10098000-100990ef : Mali-400 PP 0
1009a000-1009b0ef : Mali-400 PP 1
1009c000-1009d0ef : Mali-400 PP 2
1009e000-1009f0ef : Mali-400 PP 3
*/

static _mali_osk_resource_t arch_configuration [] =
{
	{
		.type = MALI400GP,
		.description = "Mali-400 GP",
        .base = 0x10090000,
		.irq = 37,
		.mmu_id = 1
	},
	{
		.type = MALI400PP,
        .base = 0x10098000,
		.irq = 39,
		.description = "Mali-400 PP 0",
		.mmu_id = 2
	},
	{
		.type = MALI400PP,
        .base = 0x1009a000,
		.irq = 39,
		.description = "Mali-400 PP 1",
		.mmu_id = 3
	},
	{
		.type = MALI400PP,
        .base = 0x1009c000,
		.irq = 39,
		.description = "Mali-400 PP 2",
		.mmu_id = 4
	},
	{
		.type = MALI400PP,
        .base = 0x1009e000,
		.irq = 39,
		.description = "Mali-400 PP 3",
		.mmu_id = 5
	},
	{
		.type = MMU,
        .base = 0x10093000,
		.irq = 38,
		.description = "Mali-400 MMU for GP",
		.mmu_id = 1
	},
	{
		.type = MMU,
        .base = 0x10094000,
		.irq = 38,
		.description = "Mali-400 MMU for PP 0",
		.mmu_id = 2
	},
	{
		.type = MMU,
        .base = 0x10095000,
		.irq = 38,
		.description = "Mali-400 MMU for PP 1",
		.mmu_id = 3
	},
	{
		.type = MMU,
        .base = 0x10096000,
		.irq = 38,
		.description = "Mali-400 MMU for PP 2",
		.mmu_id = 4
	},
	{
		.type = MMU,
        .base = 0x10097000,
		.irq = 38,
		.description = "Mali-400 MMU for PP 3",
		.mmu_id = 5
	},
	{
		.type = OS_MEMORY,
		.description = "System Memory",
		.size = 0x40000000, // FIXME
		.flags = _MALI_CPU_WRITEABLE | _MALI_CPU_READABLE | _MALI_PP_READABLE | _MALI_PP_WRITEABLE |_MALI_GP_READABLE | _MALI_GP_WRITEABLE
	},
	{
		.type = MEM_VALIDATION,
		.description = "Memory Validation",
		.base = 0x40000000, // FIXME
		.size = 0x40000000, // FIXME
		.flags = _MALI_CPU_WRITEABLE | _MALI_CPU_READABLE | _MALI_PP_WRITEABLE | _MALI_PP_READABLE
	},
	{
		.type = MALI400L2,
        .base = 0x10091000,
		.description = "Mali-400 L2 cache"
	},
};

#endif /* __ARCH_CONFIG_H__ */
