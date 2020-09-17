#ifndef CONFIG_H
#define CONFIG_H

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x0459
#define PRODUCT_ID      0x0001
#define DEVICE_VER      0x0001
#define MANUFACTURER    armhead
#define PRODUCT         Nostromo
#define DESCRIPTION     Nostromo

/* Bluetooth config */
#define AdafruitBleResetPin D4
#define AdafruitBleCSPin    B4
#define AdafruitBleIRQPin   E6

/* key matrix size */
#define MATRIX_ROWS 4
#define MATRIX_COLS 5

/* key matrix pins */
#define MATRIX_ROW_PINS { C7, D6, B7, B6 }
#define MATRIX_COL_PINS { F6, F5, F4, F1, F0 }
#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* number of backlight levels */

#ifdef BACKLIGHT_PIN
#define BACKLIGHT_LEVELS 3
#endif

/* Set 0 if debouncing isn't needed */
#define DEBOUNCING_DELAY 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* key combination for command */
#define IS_COMMAND() ( \
    keyboard_report->mods == (MOD_BIT(KC_LSHIFT) | MOD_BIT(KC_RSHIFT)) \
)

/* prevent stuck modifiers */
#define PREVENT_STUCK_MODIFIERS

#define RGB_DI_PIN C6
#ifdef RGB_DI_PIN
#define RGBLIGHT_ANIMATIONS
#define RGBLIGHT_LAYERS
#define RGBLIGHT_MAX_LAYERS 5
#define RGBLED_NUM 15
#define RGBLIGHT_HUE_STEP 4
#define RGBLIGHT_SAT_STEP 4
#define RGBLIGHT_VAL_STEP 4
#endif

#endif
