#include "kb.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	KEYMAP(
		KC_TAB, KC_Q, KC_W, KC_E, KC_R, 
		KC_LSFT, KC_A, KC_S, KC_D, KC_F, 
		KC_LCTL, KC_Z, KC_X, KC_C, KC_SPC, 
		TO(15)),

	KEYMAP(
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		TO(15)),

	KEYMAP(
		KC_1, KC_2, KC_3, KC_4, KC_5, 
		KC_6, KC_7, KC_8, KC_9, KC_0, 
		KC_TAB, KC_LALT, KC_MINS, KC_EQL, KC_SPC, 
		TO(15)),

	KEYMAP(
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		TO(15)),

	KEYMAP(
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		TO(15)),

	KEYMAP(
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		TO(15)),

	KEYMAP(
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		TO(15)),

	KEYMAP(
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		TO(15)),

	KEYMAP(
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		TO(15)),

	KEYMAP(
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		TO(15)),

	KEYMAP(
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		TO(15)),

	KEYMAP(
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		TO(15)),

	KEYMAP(
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		TO(15)),

	KEYMAP(
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		TO(15)),

	KEYMAP(
		RGB_HUI, RGB_SAI, RGB_VAI, KC_TRNS, OUT_BT, 
		RGB_HUD, RGB_SAD, RGB_VAD, KC_TRNS, OUT_USB, 
		RGB_TOG, KC_TRNS, KC_TRNS, RESET, RGB_MOD, 
		TO(15)),

	KEYMAP(
		TO(0), TO(1), TO(2), TO(3), TO(4), 
		TO(5), TO(6), TO(7), TO(8), TO(9), 
		TO(10), TO(11), TO(12), TO(13), TO(14), 
		KC_TRNS)

};

// const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt) {
// 	keyevent_t event = record->event;

// 	switch (id) {

// 	}
// 	return MACRO_NONE;
// }

void matrix_init_user(void) {
}

void matrix_scan_user(void) {
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	return true;
}

// Define the lighting for our RGB layers
const rgblight_segment_t PROGMEM layer_0[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 15, HSV_BLUE}
);
const rgblight_segment_t PROGMEM layer_1[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 15, HSV_GREEN}
);
const rgblight_segment_t PROGMEM layer_2[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 15, HSV_RED}
);
const rgblight_segment_t PROGMEM layer_3[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 15, HSV_GOLD}
);
const rgblight_segment_t PROGMEM layer_4[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 15, HSV_TURQUOISE}
);
const rgblight_segment_t PROGMEM layer_5[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 15, HSV_CYAN}
);
const rgblight_segment_t PROGMEM layer_6[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 15, HSV_AZURE}
);
const rgblight_segment_t PROGMEM layer_7[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 15, HSV_BLUE}
);
const rgblight_segment_t PROGMEM layer_8[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 15, HSV_PURPLE}
);
const rgblight_segment_t PROGMEM layer_9[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 15, HSV_MAGENTA}
);
const rgblight_segment_t PROGMEM layer_10[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 15, HSV_PINK}
);
const rgblight_segment_t PROGMEM layer_11[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 15, HSV_CORAL}
);
const rgblight_segment_t PROGMEM layer_12[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 15, HSV_ORANGE}
);
const rgblight_segment_t PROGMEM layer_13[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 15, HSV_YELLOW}
);
const rgblight_segment_t PROGMEM layer_14[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 15, HSV_WHITE}
);
const rgblight_segment_t PROGMEM layer_15[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 15, HSV_WHITE}
);


// Now define the array of layers. Later layers take precedence
const rgblight_segment_t* const PROGMEM my_rgb_layers[] = RGBLIGHT_LAYERS_LIST(
    layer_0,
    layer_1,
    layer_2,
    layer_3,
    layer_4,
    layer_5,
    layer_6,
    layer_7,
    layer_8,
    layer_9,
    layer_10,
    layer_11,
    layer_12,
    layer_13,
    layer_14,
    layer_15
);

layer_state_t layer_state_set_user(layer_state_t state) {
    // Both layers will light up if both kb layers are active
    rgblight_set_layer_state(0, layer_state_cmp(state, 0));
    rgblight_set_layer_state(1, layer_state_cmp(state, 1));
    rgblight_set_layer_state(2, layer_state_cmp(state, 2));
    rgblight_set_layer_state(3, layer_state_cmp(state, 3));
    rgblight_set_layer_state(4, layer_state_cmp(state, 4));
    rgblight_set_layer_state(5, layer_state_cmp(state, 5));
    rgblight_set_layer_state(6, layer_state_cmp(state, 6));
    rgblight_set_layer_state(7, layer_state_cmp(state, 7));
    rgblight_set_layer_state(8, layer_state_cmp(state, 8));
    rgblight_set_layer_state(9, layer_state_cmp(state, 9));
    rgblight_set_layer_state(10, layer_state_cmp(state, 10));
    rgblight_set_layer_state(11, layer_state_cmp(state, 11));
    rgblight_set_layer_state(12, layer_state_cmp(state, 12));
    rgblight_set_layer_state(13, layer_state_cmp(state, 13));
    rgblight_set_layer_state(14, layer_state_cmp(state, 14));
    rgblight_set_layer_state(15, layer_state_cmp(state, 15));
    return state;
}

void keyboard_post_init_user(void) {
    // Enable the LED layers
    rgblight_layers = my_rgb_layers;
  	//debug_enable=true;
  	//debug_matrix=true;
}

void led_set_user(uint8_t usb_led) {

	if (usb_led & (1 << USB_LED_NUM_LOCK)) {
		
	} else {
		
	}

	if (usb_led & (1 << USB_LED_CAPS_LOCK)) {
		
	} else {
		
	}

	if (usb_led & (1 << USB_LED_SCROLL_LOCK)) {
		
	} else {
		
	}

	if (usb_led & (1 << USB_LED_COMPOSE)) {
		
	} else {
		
	}

	if (usb_led & (1 << USB_LED_KANA)) {
		
	} else {
		
	}

}
