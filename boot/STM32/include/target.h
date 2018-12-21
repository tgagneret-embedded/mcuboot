/*
 *  Copyright (C) 2017, Linaro Ltd
 *  SPDX-License-Identifier: Apache-2.0
 */

#ifndef H_TARGETS_TARGET_
#define H_TARGETS_TARGET_


#include "../targets/stm32f769xx.h"

/*
 * Target-specific definitions are permitted in legacy cases that
 * don't provide the information via DTS, etc.
 */
#define CONFIG_BOOT_MAX_IMG_SECTORS 64
#define CONFIG_BOOT_USE_MBEDTLS 1
#define MCUBOOT_SIGN_RSA 1


#endif
