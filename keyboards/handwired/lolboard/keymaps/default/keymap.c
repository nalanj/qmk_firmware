/* Copyright 2019 Alan Johnson
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

// Defines the keycodes used by our macros in process_record_user
enum custom_keycodes {
  QMKBEST = SAFE_RANGE,
  QMKURL
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT( /* alpha */
    /* left */
    KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_NO, \
    KC_LCTRL, KC_A, KC_S, KC_D, KC_F, KC_G, KC_NO, \
    KC_LSHIFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_NO, \
    KC_MPLY, KC_ESC, KC_LALT, KC_LGUI, MO(2), MO(1), KC_SPACE, \
    /* right */                                                    \
    KC_NO, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSPACE, \
    KC_NO, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_ENTER, \
    KC_NO, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_QUOT, \
    KC_SPACE, KC_NO, MO(1), MO(2), KC_VOLD, KC_VOLU, KC_MUTE  \
  ),
  [1] = LAYOUT( /* arrows */
    /* left */
    KC_TRNS, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_NO, \
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, \
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, \
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, \
    /* right */                                                    \
    KC_NO, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_DELETE, \
    KC_NO, KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT, KC_TRNS, KC_TRNS, \
    KC_NO, KC_HOME, KC_PGDN, KC_PGUP, KC_END, KC_TRNS, KC_TRNS, \
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS \
  ),
  [2] = LAYOUT( /* numbers */
    /* left */
    KC_TRNS, KC_F1, KC_F2, KC_F3, KC_F4, KC_TRNS, KC_NO, \
    KC_TRNS, KC_F5, KC_F6, KC_F7, KC_F8, KC_TRNS, KC_NO, \
    KC_TRNS, KC_F9, KC_F10, KC_F11, KC_F12, KC_TRNS, KC_NO, \
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, \
    /* right */                                                    \
    KC_NO, KC_MINS, KC_7, KC_8, KC_9, KC_LBRC, KC_RBRC, \
    KC_NO, KC_EQL, KC_4, KC_5, KC_6, KC_NUBS, KC_TRNS, \
    KC_NO, KC_TRNS, KC_1, KC_2, KC_3, KC_TRNS, KC_TRNS, \
    KC_TRNS, KC_TRNS, KC_0, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS \
  ),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case QMKBEST:
      if (record->event.pressed) {
        // when keycode QMKBEST is pressed
        SEND_STRING("QMK is the best thing ever!");
      } else {
        // when keycode QMKBEST is released
      }
      break;
    case QMKURL:
      if (record->event.pressed) {
        // when keycode QMKURL is pressed
        SEND_STRING("https://qmk.fm/" SS_TAP(X_ENTER));
      } else {
        // when keycode QMKURL is released
      }
      break;
  }
  return true;
}

void matrix_init_user(void) {

}

void matrix_scan_user(void) {

}

void led_set_user(uint8_t usb_led) {

}
