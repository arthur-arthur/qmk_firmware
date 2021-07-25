/* 
 * Copyright 2021 Quentin LEBASTARD <qlebastard@gmail.com>
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
#include "config_common.h"
#define VENDOR_ID 0xA8F8
#define PRODUCT_ID 0x1828
#define DEVICE_VER 0x0001
#define MANUFACTURER Bastard Keyboards
#define PRODUCT TBK Mini

#define MATRIX_ROWS 8
#define MATRIX_COLS 6
#define RGBLIGHT_LIMIT_VAL 180
#define MATRIX_ROW_PINS { B5, B4, E6, D7 }
#define MATRIX_COL_PINS { F6, F7, B1, B3, B2, B6 }
#define SOFT_SERIAL_PIN D0
#define DIODE_DIRECTION COL2ROW

#define RGB_DI_PIN D2
#define RGBLED_NUM 30
#define RGBLED_SPLIT { 21, 21 }
#define RGBLIGHT_ANIMATIONS

#define DEBOUNCE 5
#define TAPPING_TOGGLE 2

// COMBOS
#ifdef COMBO_TERM
#undef COMBO_TERM
#undef COMBO_MOD_TERM
#endif

#define COMBO_STRICT_TIMER
#define COMBO_TERM 25
#define COMBO_HOLD_TERM 200
#define COMBO_PROCESS_KEY_RELEASE

#define COMBO_VARIABLE_LEN
#define COMBO_PERMISSIVE_HOLD
#define COMBO_TERM_PER_COMBO
#define COMBO_MUST_TAP_PER_COMBO
/* #define COMBO_MUST_HOLD_MODS */
#define COMBO_MUST_HOLD_PER_COMBO
#define COMBO_BUFFER_LENGTH 5
//#define COMBO_ONLY_FROM_LAYER 0
#define EXTRA_SHORT_COMBOS

#define DEFAULT_XCASE_SEPARATOR LSFT(KC_SLASH)

// #define LOCKING_SUPPORT_ENABLE
// #define LOCKING_RESYNC_ENABLE
// #define F_SCL 400000L
// #define USB_POLLING_INTERVAL_MS 1
// #define MASTER_RIGHT