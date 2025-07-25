/****************************************************************************
 * boards/xtensa/esp32s3/esp32s3-JC4827W543/src/esp32s3_reset.c
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

/****************************************************************************
 * Included Files
 ****************************************************************************/

#include <nuttx/config.h>

#include <stdlib.h>
#include <debug.h>
#include <assert.h>
#include <nuttx/arch.h>
#include <nuttx/board.h>

#include "esp32s3_systemreset.h"

#ifdef CONFIG_BOARDCTL_RESET

#if CONFIG_BOARD_ASSERT_RESET_VALUE == EXIT_SUCCESS
#  error "CONFIG_BOARD_ASSERT_RESET_VALUE must not be equal to EXIT_SUCCESS"
#endif

/****************************************************************************
 * Public Functions
 ****************************************************************************/

/****************************************************************************
 * Name: board_reset
 *
 * Description:
 *   Reset board.  Support for this function is required by board-level
 *   logic if CONFIG_BOARDCTL_RESET is selected.
 *
 * Input Parameters:
 *   status - Status information provided with the reset event.  This
 *            meaning of this status information is board-specific.  If not
 *            used by a board, the value zero may be provided in calls to
 *            board_reset().
 *
 * Returned Value:
 *   If this function returns, then it was not possible to power-off the
 *   board due to some constraints.  The return value in this case is a
 *   board-specific reason for the failure to shutdown.
 *
 ****************************************************************************/

int board_reset(int status)
{
  syslog(LOG_INFO, "reboot status=%d\n", status);

  switch (status)
    {
      case EXIT_SUCCESS:
        up_shutdown_handler();
        break;
      case CONFIG_BOARD_ASSERT_RESET_VALUE:
        break;
      default:
        break;
    }

  up_systemreset();

  return 0;
}

#endif /* CONFIG_BOARDCTL_RESET */
