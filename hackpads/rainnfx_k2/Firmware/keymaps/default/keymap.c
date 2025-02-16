// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_ortho_3x2(
        KC_A,    KC_B,
        KC_C,    KC_D,
        KC_E,    KC_F
    ),
};

void keyboard_post_init_user(void) {
    setPinInputHigh(GP0);
}

bool encoder_switch_pressed = false;

void matrix_scan_user(void) {
    // Check encoder switch state
    if (!readPin(GP0)) {
        if (!encoder_switch_pressed) {
            tap_code(KC_MUTE);
            encoder_switch_pressed = true;
        }
    } else {
        encoder_switch_pressed = false;
    }
}

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
};
#endif