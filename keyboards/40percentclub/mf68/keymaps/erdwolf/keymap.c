#include QMK_KEYBOARD_H

// Layers
#define L_DEFAULT 0
#define L_FN      1
#define L_KEYPAD  2

// Aliases
#define KC_PDIV KC_KP_SLASH
#define KC_PMUL KC_KP_ASTERISK
#define KC_PSUB KC_KP_MINUS
#define KC_PADD KC_KP_PLUS

// My complex key codes
#define MY_ESC  (LT(L_FN, KC_ESC)) // Tab for ESC, hold to activate FN layer
#define MY_FN_N (DF(L_KEYPAD))     // FN+N -> Switch on Numpad mode
#define MY_KP_N (DF(L_DEFAULT))    // [NUMPAD] N -> Switch off Numpad mode


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [L_DEFAULT] = LAYOUT_68_ansi(
        KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8,    KC_9,   KC_0,    KC_MINS, KC_EQL,   KC_BSPC,          KC_INS, KC_PGUP,
        KC_TAB,  KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I,    KC_O,   KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,          KC_DEL, KC_PGDN,
        MY_ESC,   KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K,    KC_L,   KC_SCLN, KC_QUOT,        KC_ENTER,
        KC_LSHIFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH,               KC_RSHIFT,          KC_UP,
        KC_LCTL, KC_LALT, KC_LGUI,            KC_SPACE,             KC_RGUI, KC_RALT, KC_RCTL,                  KC_LEFT, KC_DOWN, KC_RIGHT),
    [L_FN] = LAYOUT_68_ansi(
        _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  _______,          _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
        _______, _______, _______, _______, _______, _______, MY_FN_N, _______, _______, _______, _______,                   _______,          _______,
        _______, _______, _______,          _______,                   _______, _______, _______,                                     _______, _______, _______),
    [L_KEYPAD] = LAYOUT_68_ansi(
        _______, _______, _______, _______, _______, _______, _______, KC_P7,   KC_P8,   KC_P9,    _______, _______, _______, _______,          _______, _______,
        _______, _______, _______, _______, _______, _______, _______,  KC_P4,   KC_P5,   KC_P6,   _______, _______, _______, _______,          _______, _______,
        _______, _______, _______, _______, _______, _______, _______,   KC_P1,   KC_P2,   KC_P3,  _______, _______,          _______,
        _______, _______, _______, _______, _______, _______, MY_KP_N,    KC_P0,   KC_P0, KC_PDOT, _______,                   _______,          _______,
        _______, _______, _______,          _______,                   _______, _______, _______,                                      _______, _______, _______),
};
