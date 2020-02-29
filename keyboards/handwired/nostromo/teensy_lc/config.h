/* Copyright 2019
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

// TODO: including this causes "error: expected identifier before '(' token" errors
//#include "config_common.h"

#define MATRIX_COL_PINS { A2, D7, D4, D2, D3 }  // PCB 4, 5, 6, 7, 8
#define MATRIX_ROW_PINS { B16, B17, D0 }        // PCB 0, 1, 2

#define AdafruitBleResetPin B0      // PCB 16
#define AdafruitBleCSPin    C4      // PCB 10
#define AdafruitBleIRQPin   C0      // PCB 15

//#define MATRIX_COL_PINS { A2 }
//#define MATRIX_ROW_PINS { B2 }

#define UNUSED_PINS
