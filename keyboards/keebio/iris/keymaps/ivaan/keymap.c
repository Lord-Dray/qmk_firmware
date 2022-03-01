#include QMK_KEYBOARD_H

/*
#define _QWERTY 0
#define _LOWER 1
#define _RAISE 2
#define _ADJUST 3
*/

#define IN_CPY LCTL(KC_C)
#define IN_PST LCTL(KC_V)
#define IN_CUT LCTL(KC_X)
#define IN_UNDO LCTL(KC_Z)
#define IN_REDO LCTL(KC_Y)
#define IN_SPC2 LT(2, KC_SPC)
#define IN_SPC3 LT(3, KC_SPC)
#define IN_ENT1 LT(1, KC_ENT)
#define IN_ENT3 LT(3, KC_ENT)

// Left-hand home row mods
#define GUI_A LGUI_T(KC_A)
#define ALT_S LALT_T(KC_S)
#define SFT_D LSFT_T(KC_D)
#define CTL_F LCTL_T(KC_F)

// Right-hand home row mods
#define CTL_J RCTL_T(KC_J)
#define SFT_K RSFT_T(KC_K)
#define ALT_L LALT_T(KC_L)
#define GUI_SCLN RGUI_T(KC_SCLN)

// Left-hand layer 1 home row mods
#define GUI_0 LGUI_T(KC_0)
#define ALT_9 LALT_T(KC_9)
#define SFT_8 LSFT_T(KC_8)
#define CTL_7 LCTL_T(KC_7)

// Right-hand layer 1 home row mods
#define CTL_LEFT RCTL_T(KC_LEFT)
#define SFT_DOWN RSFT_T(KC_DOWN)
#define ALT_RGHT LALT_T(KC_RGHT)
#define GUI_EQL RGUI_T(KC_EQL)

enum custom_keycodes {
    IN_GBY = SAFE_RANGE,
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [0] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                               KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                               KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_DEL,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LCTL, GUI_A,   ALT_S,   SFT_D,   CTL_F,   KC_G,                               KC_H,    CTL_J,   SFT_K,   ALT_L,   GUI_SCLN, KC_QUOT,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_MUTE,          KC_END,  KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    KC_LGUI, MO(1),   IN_ENT1,                    IN_SPC2,  MO(2),   KC_RALT
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [1] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                              KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_TRNS,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TRNS, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                               IN_PST,  KC_HOME, KC_UP,   KC_PGUP, IN_CUT,  KC_TRNS,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TRNS, GUI_0,  ALT_9,    SFT_8,  CTL_7,    KC_6,                               IN_CPY,  CTL_LEFT,SFT_DOWN,ALT_RGHT,GUI_EQL, KC_BSLS,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TRNS, IN_UNDO, IN_CUT,  IN_CPY,  IN_PST,  KC_LBRC, KC_TRNS,          KC_TRNS, KC_RBRC, KC_END,  KC_DOWN, KC_PGDN, KC_MINS, KC_TRNS,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    KC_TRNS, KC_TRNS, KC_TRNS,                   IN_SPC3, MO(3),   KC_INS
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [2] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_F12,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                              KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TRNS, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,                            IN_PST,  KC_HOME, KC_UP,   KC_PGUP, IN_CUT,  KC_TRNS,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TRNS, KC_RPRN, KC_LPRN, KC_ASTR, KC_AMPR, KC_CIRC,                            IN_CPY,  KC_LEFT, KC_DOWN, KC_RGHT, KC_EQL,  KC_TRNS,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_LCBR, KC_TRNS,          KC_TRNS, KC_RCBR, KC_END,  KC_DOWN, KC_PGDN, KC_MINS, KC_TRNS,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    KC_TRNS, MO(3),   IN_ENT3,                   KC_TRNS, KC_TRNS, KC_APP
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [3] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     _______, _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, IN_GBY, _______, _______, _______, _______,                            _______, KC_7,    KC_8,    KC_9,    _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, _______, _______, _______, _______,                            _______, KC_4,    KC_5,    KC_6,    _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, _______, _______, _______, _______, _______,          _______, _______, KC_1,    KC_2,    KC_3,    _______, _______,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    _______, _______, _______,                   KC_PSCR, _______, KC_0
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  )
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
    case IN_GBY:
        if (record->event.pressed) {
            SEND_STRING("goodbye");
        }
        break;
    }
    return true;
};

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case SFT_D:
        case SFT_K:
            return TAPPING_TERM_LESS;
        case GUI_SCLN:
        case GUI_A:
        case IN_ENT1:
        case IN_SPC2:
        case IN_ENT3:
        case IN_SPC3:
        case ALT_S:
        case ALT_L:
            return TAPPING_TERM_MORE;
        default:
            return TAPPING_TERM;
    }
}

bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) {
        if (clockwise) {
            tap_code(KC_VOLU);
        } else {
            tap_code(KC_VOLD);
        }
    }
    else if (index == 1) {
        if (clockwise) {
            tap_code16(C(KC_Y));
        } else {
            tap_code16(C(KC_Z));
        }
    }
    return true;
}
