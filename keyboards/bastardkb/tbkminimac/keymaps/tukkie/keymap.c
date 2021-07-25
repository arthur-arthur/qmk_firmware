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

#include QMK_KEYBOARD_H
#include "g/keymap_combo.h"
#include "keymap_belgian.h"
#include "sendstring_belgian.h"

#define BASE 0
#define NAV 1
#define SYM 2
#define NUM 3
#define FN 4

// Thumb keys
#define SPC_NAV LT(NAV, KC_SPC)
#define BSPC_SYM LT(SYM, KC_BSPC)
#define OSM_S OSM(MOD_LSFT)

// win nav
#define LEFTW LALT(KC_LEFT)
#define RIGHTW LALT(KC_DEL)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [BASE] = LAYOUT(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_ESC,    BE_Q,    BE_W,    BE_F,    BE_P,    BE_G,                         BE_J,    BE_L,    BE_U,    BE_Y, BE_EXLM, BE_QUOT,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_RALT,    BE_A,    BE_R,    BE_S,    BE_T,    BE_D,                         BE_H,    BE_N,    BE_E,    BE_I,    BE_O, BE_DQUO,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LGUI,    BE_Z,    BE_X,    BE_C,    BE_V,    BE_B,                         BE_K,    BE_M, BE_COMM,  BE_DOT, BE_QUES, BE_MINS,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                        BSPC_SYM,   OSM_S, TT(NUM),     MO(FN),  KC_ENT,  SPC_NAV
                                   //`-----------------------------|  |----------------------------

  ),

  [NAV] = LAYOUT(
      
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX,  LEFTW,   KC_UP,  RIGHTW,  XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______, XXXXXXX, XXXXXXX, XXXXXXX, KC_RSFT, XXXXXXX,                      KC_HOME, KC_LEFT, KC_DOWN,KC_RIGHT,  KC_END, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______, KC_LGUI, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      KC_PGDN, KC_PGUP, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                         _______,  _______,  _______,  _______,  _______, _______
                                      //`--------------------------'  `--------------------------'
  ),

  [SYM] = LAYOUT(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      _______,  BE_PND,  BE_DEG, BE_SLSH, BE_PERC, BE_EGRV,                      BE_EURO, BE_UGRV, BE_UNDS,  BE_ATw, BE_DIAE, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______, BE_AGRV, BE_GRVw, BE_SCLN,BE_TILDw,  BE_DLR,                     BE_HASHw, BE_AMPR, BE_EACU,  BE_EQL,BE_PIPEw, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______, KC_LGUI, BE_ASTR, BE_CCED, BE_DCIR,BE_BSLSw,                     BE_LABK, BE_RABK, BE_MINS, BE_PLUS, BE_COLN, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                         _______, _______, _______,    _______, _______, _______
                                      //`--------------------------'  `--------------------------'
  ),


  [NUM] = LAYOUT(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX,  KC_F11,  KC_F12,  KC_F13,  KC_F14,  KC_F15,                      BE_PLUS,    BE_7,    BE_8,    BE_9, BE_ASTR, BE_COMM,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______,   KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,                      BE_MINS,    BE_4,    BE_5,    BE_6, BE_SLSH, BE_COLN,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                         BE_0,    BE_1,    BE_2,    BE_3,  BE_DOT,  KC_ENT,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          _______, _______, _______,   _______, _______, _______
                                      //`--------------------------'  `--------------------------'
  ),


[FN] = LAYOUT(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      RGB_TOG, RGB_MOD, KC_BTN1, KC_MS_U, KC_BTN2, KC_BRIU,                      KC_VOLU, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, KC_MS_L, KC_MS_D, KC_MS_R, KC_BRID,                      KC_VOLD, KC_ACL0, KC_ACL1, KC_ACL2, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      BL_TOGG, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      KC_MUTE, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          _______, _______, _______,   _______, _______, _______
                                      //`--------------------------'  `--------------------------'
  )
  
};