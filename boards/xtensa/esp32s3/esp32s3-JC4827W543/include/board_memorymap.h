/****************************************************************************
 * boards/xtensa/esp32s3/esp32s3-JC4827W543/include/board_memorymap.h
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed to the Apache Software Foundation (ASF) under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.  The
 * ASF licenses this file to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance with the
 * License.  You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.  See the
 * License for the specific language governing permissions and limitations
 * under the License.
 *
 ****************************************************************************/

#ifndef __BOARDS_XTENSA_ESP32S3_ESP32S3_JC4827W543_INCLUDE_BOARD_MEMORYMAP_H
#define __BOARDS_XTENSA_ESP32S3_ESP32S3_JC4827W543_INCLUDE_BOARD_MEMORYMAP_H

/****************************************************************************
 * Included Files
 ****************************************************************************/

#include <stdint.h>

/****************************************************************************
 * Pre-processor Definitions
 ****************************************************************************/

/* Kernel ROM */

#define KIROM_START     (uintptr_t)__kirom_start
#define KIROM_SIZE      (uintptr_t)__kirom_size
#define KDROM_START     (uintptr_t)__kdrom_start
#define KDROM_SIZE      (uintptr_t)__kdrom_size

/* Kernel RAM */

#define KIRAM_START     (uintptr_t)__kiram_start
#define KIRAM_SIZE      (uintptr_t)__kiram_size
#define KIRAM_END       (uintptr_t)__kiram_end
#define KDRAM_START     (uintptr_t)__kdram_start
#define KDRAM_SIZE      (uintptr_t)__kdram_size
#define KDRAM_END       (uintptr_t)__kdram_end

/* Exception vectors */

#define VECTORS_START   (uintptr_t)__vectors_start
#define VECTORS_END     (uintptr_t)__vectors_end

/* User ROM */

#define UIROM_START     (uintptr_t)__uirom_start
#define UIROM_SIZE      (uintptr_t)__uirom_size
#define UIROM_END       (uintptr_t)__uirom_end
#define UDROM_START     (uintptr_t)__udrom_start
#define UDROM_SIZE      (uintptr_t)__udrom_size
#define UDROM_END       (uintptr_t)__udrom_end

/* User RAM */

#define UIRAM_START     (uintptr_t)__uiram_start
#define UIRAM_SIZE      (uintptr_t)__uiram_size
#define UIRAM_END       (uintptr_t)__uiram_end
#define UDRAM_START     (uintptr_t)__udram_start
#define UDRAM_SIZE      (uintptr_t)__udram_size
#define UDRAM_END       (uintptr_t)__udram_end

/****************************************************************************
 * Public Data
 ****************************************************************************/

/* Kernel ROM (RX)  */

extern uint8_t          __kirom_start[];
extern uint8_t          __kirom_size[];
extern uint8_t          __kdrom_start[];
extern uint8_t          __kdrom_size[];

/* Kernel RAM (RW) */

extern uint8_t          __kiram_start[];
extern uint8_t          __kiram_size[];
extern uint8_t          __kiram_end[];
extern uint8_t          __kdram_start[];
extern uint8_t          __kdram_size[];
extern uint8_t          __kdram_end[];

/* Exception vectors */

extern uint8_t          __vectors_start[];
extern uint8_t          __vectors_end[];

/* User ROM (RX) */

extern uint8_t          __uirom_start[];
extern uint8_t          __uirom_size[];
extern uint8_t          __uirom_end[];
extern uint8_t          __udrom_start[];
extern uint8_t          __udrom_size[];
extern uint8_t          __udrom_end[];

/* User RAM (RW) */

extern uint8_t          __uiram_start[];
extern uint8_t          __uiram_size[];
extern uint8_t          __uiram_end[];
extern uint8_t          __udram_start[];
extern uint8_t          __udram_size[];
extern uint8_t          __udram_end[];

#endif /* __BOARDS_XTENSA_ESP32S3_ESP32S3_JC4827W543_INCLUDE_BOARD_MEMORYMAP_H */
