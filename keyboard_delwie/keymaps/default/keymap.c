#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌──────┬─────┬──────┬─────┬────┬─────┬─────┬──────┬──────┬─────┬────┬──────┐
     * │ ESC  │ Q   │ W    │ E   │ R  │ T   │ Y   │ U    │ I    │ O   │ P  │ BACK │
     * ├──────┼─────┼──────┼─────┼────┼─────┼─────┼──────┼──────┼─────┼────┼──────┤
     * │ TAB  │ A   │ S    │ D   │ F  │ G   │ H   │ J    │ K    │ L   │    │      │
     * ├──────┼─────┼──────┼─────┼────┼─────┼─────┼──────┼──────┼─────┼────┼──────┤
     * │ LSHF │ Z   │ X    │ C   │ V  │ B   │ N   │ M    │ ,    │ .   │    │ LSHF │
     * ├──────┼─────┼──────┼─────┼────┼─────┼─────┼──────┼──────┼─────┼────┼──────┤
     * │ LCTL │ LGUI│ LALT │     │ ENT│ SPC │ SPC │ DEL  │ LEFT │ DOWN│ UP │ RIGHT│
     * └──────┴─────┴──────┴─────┴────┴─────┴─────┴──────┴──────┴─────┴────┴──────┘
     */
    [0] = LAYOUT_delwie(
        KC_ESC,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
        KC_TAB,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_NO,   KC_NO,
        KC_LSFT,   KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_NO,   KC_SLSH, 
        KC_LCTL,   KC_LGUI, KC_LALT, KC_NO,   KC_ENT,  KC_SPC,  KC_SPC,  KC_DEL,  KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT
    )
};
