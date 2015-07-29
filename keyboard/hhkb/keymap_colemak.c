#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    KEYMAP(FN0,    1,   2,   3,   4,   5,   6,   7,   8,   9,   0,MINS, EQL,BSLS, DEL, \
           TAB,    Q,   W,   F,   P,   G,   J,   L,   U,   Y,SCLN,LBRC,RBRC,BSPC,      \
           LGUI,   A,   R,   S,   T,   D,   H,   N,   E,   I,   O,QUOT, ENT,           \
           LSFT,   Z,   X,   C,   V,   B,   K,   M,COMM, DOT,SLSH,RSFT, ESC,           \
                LALT,LCTL,           FN1,                RCTL,RALT),

    KEYMAP(TRNS,  F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9, F10, F11, F12, GRV,TRNS, \
           TRNS, PWR,TRNS,TRNS,PSCR,CAPS,HOME,PGDN,PGUP, END,MUTE,VOLD,VOLU,TRNS,      \
           TRNS, F15, F16, F17, F18, F19,LEFT,DOWN,  UP,RGHT, F13, F14,TRNS,           \
           TRNS,TRNS,TRNS,TRNS,TRNS, SPC, SPC,MPLY,MPRV,MNXT,PAUS,TRNS,TRNS,           \
                TRNS,TRNS,          TRNS,               TRNS,TRNS),
};

const uint16_t PROGMEM fn_actions[] = {
    [0] = ACTION_LAYER_TOGGLE(1),
    [1] = ACTION_LAYER_TAP_KEY(1, KC_SPACE),
};