#include QMK_KEYBOARD_H
#if __has_include("keymap.h")
#    include "keymap.h"
#endif


/* THIS FILE WAS GENERATED!
 *
 * This file was generated by qmk json2c. You may or may not want to
 * edit it directly.
 */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_3x6_3(KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSPC, KC_LSFT, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_ESC, KC_LCTL, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_QUOT, KC_LGUI, MO(2), KC_SPC, KC_ENT, MO(1), KC_RALT),
    [1] = LAYOUT_split_3x6_3(KC_TAB, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_BSPC, KC_LSFT, LCTL(KC_LSFT), KC_PSCR, KC_DEL, KC_NO, KC_NO, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_NO, KC_NO, KC_LCTL, KC_NO, KC_NO, KC_NO, KC_NO, TG(4), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_LGUI, MO(3), KC_SPC, KC_ENT, KC_TRNS, KC_RALT),
    [2] = LAYOUT_split_3x6_3(KC_TAB, KC_QUOT, KC_LT, KC_GT, KC_DQUO, KC_DOT, KC_AMPR, KC_UNDS, KC_LBRC, KC_RBRC, KC_PERC, KC_BSPC, KC_LSFT, KC_EXLM, KC_MINS, KC_PLUS, KC_EQL, KC_HASH, KC_PIPE, KC_COLN, KC_LPRN, KC_RPRN, KC_QUES, KC_GRV, KC_LCTL, KC_CIRC, KC_SLSH, KC_ASTR, KC_BSLS, KC_NO, KC_TILD, KC_DLR, KC_LCBR, KC_RCBR, KC_AT, KC_NO, KC_LGUI, KC_TRNS, KC_SPC, KC_ENT, MO(3), KC_RALT),
    [3] = LAYOUT_split_3x6_3(QK_BOOT, KC_NO, KC_NO, KC_NO, RGB_VAD, RGB_VAI, KC_F1, KC_F2, KC_F3, KC_F4, KC_NO, KC_BSPC, KC_LSFT, KC_LALT, RGB_VAD, RGB_VAI, RGB_SAD, RGB_SAI, KC_F5, KC_F6, KC_F7, KC_F8, KC_NO, KC_NO, KC_LCTL, RGB_TOG, RGB_RMOD, RGB_MOD, RGB_HUD, RGB_HUI, KC_F9, KC_F10, KC_F11, KC_F12, KC_NO, KC_NO, KC_LGUI, KC_TRNS, KC_SPC, KC_ENT, KC_TRNS, KC_RALT),
    [4] = LAYOUT_split_3x6_3(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_7, KC_8, KC_9, KC_PLUS, KC_ASTR, KC_BSPC, KC_LSFT, KC_A, KC_NO, KC_NO, KC_NO, KC_NO, KC_4, KC_5, KC_6, KC_MINS, KC_SLSH, KC_NO, KC_LCTL, KC_NO, KC_NO, KC_C, KC_V, TG(4), KC_1, KC_2, KC_3, KC_EQL, KC_NO, KC_NO, KC_NO, KC_NO, KC_SPC, KC_ENT, KC_0, KC_NO)
};



#ifdef OTHER_KEYMAP_C
#    include OTHER_KEYMAP_C
#endif // OTHER_KEYMAP_C


