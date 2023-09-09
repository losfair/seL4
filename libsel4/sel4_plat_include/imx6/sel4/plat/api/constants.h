/*
 * Copyright 2020, Data61, CSIRO (ABN 41 687 119 230)
 *
 * SPDX-License-Identifier: BSD-2-Clause
 */

#pragma once

#include <sel4/config.h>

#ifdef CONFIG_ARM_CORTEX_A9
#include <sel4/arch/constants_cortex_a9.h>
#endif

#ifdef CONFIG_ARM_CORTEX_A7
#include <sel4/arch/constants_cortex_a7.h>
#endif

/* First address in the virtual address space that is not accessible to user level */
#define seL4_UserTop 0xe0000000
