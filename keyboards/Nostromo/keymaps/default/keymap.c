#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = 
{
  LAYOUT( 
    KC_A, KC_B, KC_C, KC_D, KC_E, \
    KC_F, KC_G, KC_H, KC_I, KC_J, \
    KC_K, KC_L, KC_M, KC_N, KC_O),
};


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  // If console is enabled, it will print the matrix position and status of each key pressed
#ifdef CONSOLE_ENABLE
    uprintf("KL: kc: %u, col: %u, row: %u, pressed: %u\n", keycode, record->event.key.col, record->event.key.row, record->event.pressed);
#endif 
  return true;
}


/*
  LAYOUT( 
    KC_KP_ASTERISK, KC_KP_7, KC_KP_8, KC_KP_9, KC_KP_MINUS, \
    KC_H,           KC_KP_4, KC_KP_5, KC_KP_6, KC_KP_SLASH, \
    KC_N,           KC_KP_1, KC_KP_2, KC_KP_3, KC_KP_0),
*/