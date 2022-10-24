/*
 * Copyright (c) 2020, Erich Styger
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef PLATFORM_H_
#define PLATFORM_H_

#include "platform.h"

/* note: PL_CONFIG_IS_TINY_K22  is set in IncludeMcudLibConfig.h */

#define PL_CONFIG_USE_RTT             (1)
#define PL_CONFIG_USE_SHELL           (1)
#define PL_CONFIG_USE_SHELL_UART      (1)
#define PL_CONFIG_USE_INTERNAL_FLASH  (0)
#define PL_CONFIG_USE_MININI          (1)

void PL_InitFromTask(void);
void PL_Init(void);

#endif /* PLATFORM_H_ */
