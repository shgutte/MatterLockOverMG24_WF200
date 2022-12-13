/***************************************************************************//**
 * @file
 * @brief MPU configuration file.
 *******************************************************************************
 * # License
 * <b>Copyright 2020 Silicon Laboratories Inc. www.silabs.com</b>
 *******************************************************************************
 *
 * SPDX-License-Identifier: Zlib
 *
 * The licensor of this software is Silicon Laboratories Inc.
 *
 * This software is provided 'as-is', without any express or implied
 * warranty. In no event will the authors be held liable for any damages
 * arising from the use of this software.
 *
 * Permission is granted to anyone to use this software for any purpose,
 * including commercial applications, and to alter it and redistribute it
 * freely, subject to the following restrictions:
 *
 * 1. The origin of this software must not be misrepresented; you must not
 *    claim that you wrote the original software. If you use this software
 *    in a product, an acknowledgment in the product documentation would be
 *    appreciated but is not required.
 * 2. Altered source versions must be plainly marked as such, and must not be
 *    misrepresented as being the original software.
 * 3. This notice may not be removed or altered from any source distribution.
 *
 ******************************************************************************/

#ifndef SL_MPU_CONFIG_H
#define SL_MPU_CONFIG_H

#if defined(SL_CATALOG_DEBUG_SYSTEM_PRESENT)
#include "sl_debug_system.h"

#define SL_MPU_DEBUG_LEVEL_OFF      SL_DEBUG_SYSTEM_LEVEL_OFF
#define SL_MPU_DEBUG_LEVEL_ERROR    SL_DEBUG_SYSTEM_LEVEL_ERROR
#define SL_MPU_DEBUG_LEVEL_WARNING  SL_DEBUG_SYSTEM_LEVEL_WARNING
#define SL_MPU_DEBUG_LEVEL_INFO     SL_DEBUG_SYSTEM_LEVEL_INFO
#else
#define SL_MPU_DEBUG_LEVEL_OFF      0
#define SL_MPU_DEBUG_LEVEL_ERROR    0
#define SL_MPU_DEBUG_LEVEL_WARNING  0
#define SL_MPU_DEBUG_LEVEL_INFO     0
#endif

// <<< Use Configuration Wizard in Context Menu >>>

// <o SL_MPU_DEBUG_LEVEL> Debugging events report level. Requires debug system component. Meaningless when not present.
//   <SL_MPU_DEBUG_LEVEL_OFF=> Disabled
//   <SL_MPU_DEBUG_LEVEL_ERROR=> Error
//   <SL_MPU_DEBUG_LEVEL_WARNING=> Warning + Error
//   <SL_MPU_DEBUG_LEVEL_INFO=> Warning + Error + Info
// <i> Default: SL_MPU_DEBUG_LEVEL_WARNING
#define SL_MPU_DEBUG_LEVEL  SL_MPU_DEBUG_LEVEL_WARNING

// <o SL_MPU_DEBUG_ASSERT> Enable debug asserts. Requires debug system component. Meaningless when not present.
// <i> Default: Enabled
#define SL_MPU_DEBUG_ASSERT 1

// <<< end of configuration section >>>

#endif /* MPU_CONFIG_H */
