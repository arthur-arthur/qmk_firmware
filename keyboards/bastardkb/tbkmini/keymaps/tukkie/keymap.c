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

// Layer declarations
#define _mBASE 0
#define _mNAV 1
#define _mSYM 2
#define _mNUM 3
#define _mMACRO 4
#define _wBASE 5
#define _wNAV 6
#define _wSYM 7
#define _wNUM 8
#define _wMACRO 9

// Thumb keys
#define SPC_NAV LT(_mNAV,KC_SPC)
#define BSP_MACRO LT(_mMACRO,KC_BSPC)
#define DEL_SYM LT(_mSYM,KC_DEL)
#define TAB_NUM LT(_mNUM,KC_TAB)
// nav
#define LEFTW LALT(KC_LEFT)
#define RIGHTW LALT(KC_RIGHT)

// macro combo


// enum custom_keycodes {
//     LAYER0 = SAFE_RANGE,
//     LAYER1,
//     LAYER2,
//     LAYER3,
// };

// // Macro Declarations
// enum {
//     YOUR_MACRO_1 = 0,
//     YOUR_MACRO_2
// };

// // Macro Definitions
// const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
// {
//   switch(id) {

//     // for basic strings
//     case YOUR_MACRO_1: {
//         if (record->event.pressed) {
//             SEND_STRING("YOUR_STRING_HERE"); 
//             return false;
//         }
//     }

//     case YOUR_MACRO_2: {
//       if (recond->event.pressed) {
//           // INSERT CODE HERE
//       }
//     }
//   }
//   return MACRO_NONE;
// };

// //using macro within keymap: M(YOUR_MACRO_1)

// // Tap Dance Declarations
// enum {
//     YOUR_TAPDANCE_1 = 0,
//     YOUR_TAPDANCE_2
// };

// // Tap Dance Definitions
// qk_tap_dance_action_t tap_dance_actions[] = {
//     // simple tap dance
//     [YOUR_TAPDANCE_1] = ACTION_TAP_DANCE_DOUBLE(KC_XXXX, KC_YYYY), // replace with your keycodes. BASIC codes only, no custom codes.

//     // complex tap dance function (to specify what happens when key is pressed 3+ times, for example). See full docs for how to define
//     [YOUR_TAPDANCE_2] = ACTION_TAP_DANCE_FN(your_function_name),
// };


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_mBASE] = LAYOUT(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
  MT(KC_LCTRL, KC_ESC),  KC_Q,   KC_W,    KC_F,    KC_P,    KC_G,                  KC_J,    KC_L,    KC_U,    KC_Y,   KC_P,  XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
  MT(KC_RALT, KC_TAB),   KC_A,   KC_R,    KC_S,    KC_T,    KC_D,                  KC_H,    KC_N,    KC_E,    KC_I,    KC_O, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
    KC_LGUI,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                         KC_K,    KC_M, KC_COMM,  KC_DOT, KC_SLSH, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                BSP_MACRO, DEL_SYM, TAB_NUM,             XXXXXXX, KC_ENT, SPC_NAV
                            //`------------------------------------|  |------------------------------------

  ),

  [_mNAV] = LAYOUT(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
    RESET, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                        XXXXXXX,  LEFTW,  KC_UP,  RIGHTW, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_RSFT, XXXXXXX,                       KC_HOME, KC_LEFT, KC_DOWN,KC_RIGHT, KC_END, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LSFT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      KC_PGDN, KC_PGUP, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                        _______, _______, _______,     _______,_______,_______
                                      //`--------------------------'  `--------------------------'
  ),

  [_mSYM] = LAYOUT(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       XXXXXXX, KC_EXLM,   KC_AT, KC_HASH,  KC_DLR, KC_PERC,                      KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_BSPC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LCTL, KC_AT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      KC_MINS,  KC_EQL, KC_LBRC, KC_RBRC, KC_BSLS,  KC_GRV,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LSFT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR, KC_PIPE, KC_TILD,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                         _______, _______, _______,     _______,_______,_______
                                      //`--------------------------'  `--------------------------'
  ),

  [_mNUM] = LAYOUT(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
        RESET, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LGUI,  KC_SPC, _______,     _______, KC_ENT, KC_RALT
                                      //`--------------------------'  `--------------------------'
  ),


[_mMACRO] = LAYOUT(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
        RESET, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LGUI,  KC_SPC, _______,     _______, KC_ENT, KC_RALT
                                      //`--------------------------'  `--------------------------'
  )
};


//chordings


const uint16_t PROGMEM p_g[] = {KC_P, KC_G, COMBO_END};
const uint16_t PROGMEM t_d[] = {KC_T, KC_D, COMBO_END};

const uint16_t PROGMEM lgui_z[] = { KC_LGUI, KC_Z, COMBO_END};
const uint16_t PROGMEM x_c[] = {KC_X, KC_C, COMBO_END};
const uint16_t PROGMEM v_b[] = {KC_V, KC_B, COMBO_END};


enum combos { 

  P_G_COMBO,
  T_D_COMBO,
  LGUI_Z_COMBO,
  X_C_COMBO,
  V_B_COMBO,
    W_F_COMBO,
  RALT_A_COMBO,
  A_R_COMBO,
  R_S_COMBO,
  S_T_COMBO,
  F_T_COMBO,
  S_V_COMBO,
  T_B_COMBO,
  P_D_COMBO,
  C_V_COMBO,
};

const uint16_t PROGMEM t_d_combo[] = { KC_T, KC_D, COMBO_END};
const uint16_t PROGMEM lgui_z_combo[] = { KC_LGUI, KC_Z, COMBO_END};
const uint16_t PROGMEM x_c_combo[] = { KC_X, KC_C, COMBO_END};
const uint16_t PROGMEM v_b_combo[] = { KC_V, KC_B, COMBO_END};
const uint16_t PROGMEM w_f_combo[] = { KC_W, KC_F, COMBO_END};
const uint16_t PROGMEM ralt_a_combo[] = { KC_RALT, KC_A, COMBO_END};
const uint16_t PROGMEM a_r_combo[] = { KC_A, KC_R, COMBO_END};
const uint16_t PROGMEM r_s_combo[] = { KC_R, KC_S, COMBO_END};
const uint16_t PROGMEM s_t_combo[] = { KC_S, KC_T, COMBO_END};
const uint16_t PROGMEM f_t_combo[] = { KC_F, KC_T, COMBO_END};
const uint16_t PROGMEM s_v_combo[] = { KC_S, KC_V, COMBO_END};
const uint16_t PROGMEM t_b_combo[] = { KC_T, KC_B, COMBO_END};
const uint16_t PROGMEM p_d_combo[] = { KC_P, KC_D, COMBO_END};
const uint16_t PROGMEM c_v_combo[] = { KC_C, KC_V, COMBO_END};
const uint16_t PROGMEM p_g_combo[] = { KC_P, KC_G, COMBO_END};


combo_t key_combos[COMBO_COUNT] = { 

  [P_G_COMBO] = COMBO(p_g_combo, KC_TAB),
  [T_D_COMBO] = COMBO(t_d_combo, KC_DEL),
  [LGUI_Z_COMBO] = COMBO_ACTION(lgui_z_combo),
  [X_C_COMBO] = COMBO_ACTION(x_c_combo),
  [V_B_COMBO] = COMBO_ACTION(v_b_combo),
  [W_F_COMBO] = COMBO_ACTION(w_f_combo),
  [RALT_A_COMBO] = COMBO(ralt_a_combo, KC_CAPS),
  [A_R_COMBO] = COMBO_ACTION(a_r_combo),
  [R_S_COMBO] = COMBO_ACTION(r_s_combo),
  [S_T_COMBO] = COMBO_ACTION(s_t_combo),
  [F_T_COMBO] = COMBO(f_t_combo, KC_LCBR),
  [S_V_COMBO] = COMBO(s_v_combo, KC_LCBR),
  [T_B_COMBO] = COMBO(t_b_combo, KC_LPRN),
  [P_D_COMBO] = COMBO(p_d_combo, KC_LBRC),
  [C_V_COMBO] = COMBO_ACTION(c_v_combo),

};


void process_combo_event(uint16_t combo_index, bool p) {
  switch(combo_index) {

    case LGUI_Z_COMBO: if (p) {tap_code16(LGUI(KC_Z));} break;
    case X_C_COMBO: if (p) {tap_code16(LGUI(KC_C));} break;
    case V_B_COMBO: if (p) {tap_code16(LGUI(KC_V));} break;
    case W_F_COMBO: if (p) {tap_code16(LGUI(KC_F));} break;
    case A_R_COMBO: if (p) {tap_code16(LGUI(KC_A));} break;
    case R_S_COMBO: if (p) {tap_code16(LGUI(KC_S));} break;
    case S_T_COMBO: if (p) {tap_code16(LGUI(KC_T));} break;
    case C_V_COMBO: if (p) {tap_code16(LGUI(KC_V));} break;
  }
}
