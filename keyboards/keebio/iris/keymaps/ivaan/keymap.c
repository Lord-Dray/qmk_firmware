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
#define IN_TAB3 LT(3, KC_TAB)

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
     KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_MUTE,          KC_PSCR, KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    KC_LGUI, MO(1),   IN_ENT1,                   IN_SPC2, MO(2),   KC_RALT
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
     KC_TRNS, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                               IN_PST,  KC_HOME, KC_UP,   KC_PGUP, IN_CUT,  KC_TRNS,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TRNS, GUI_0,  ALT_9,    SFT_8,  CTL_7,    KC_6,                               IN_CPY,  CTL_LEFT,SFT_DOWN,ALT_RGHT,GUI_EQL, KC_TRNS,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_LCBR, KC_TRNS,          KC_TRNS, KC_RCBR, KC_END,  KC_DOWN, KC_PGDN, KC_MINS, KC_TRNS,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    KC_TRNS, MO(3),   IN_TAB3,                   KC_TRNS, KC_TRNS, KC_APP
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [3] = LAYOUT(//IN_GBY
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     TG(4), _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                              _______, KC_7,    KC_8,    KC_9,    TG(3),   _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, KC_F10,  KC_F9,   KC_F8,   KC_F7,   KC_F6,                              _______, KC_4,    KC_5,    KC_6,    _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______, KC_F11,  KC_F12,  _______, _______, _______, _______,          _______, _______, KC_1,    KC_2,    KC_3,    _______, _______,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    _______, _______, _______,                   KC_PSCR, _______, KC_0
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [4] = LAYOUT(//IN_GBY
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     TG(4),   _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, _______, KC_W,    KC_E,    _______,                            _______, _______, _______, _______, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, KC_A,    KC_S,    KC_D,    _______,                            _______, _______, _______, _______, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, _______,  _______, _______, _______, _______,         _______, _______, _______, _______, _______, _______, _______,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    _______, _______, KC_SPC,                    _______, _______, _______
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  )
};

//KC_APP
const uint16_t PROGMEM appkey_combo_commaperiod[] = {KC_COMM, KC_DOT, COMBO_END};

const uint16_t PROGMEM escape_combo_fg[] = {CTL_F, KC_G, COMBO_END};
const uint16_t PROGMEM backspace_combo_yu[] = {KC_Y, KC_U, COMBO_END};
const uint16_t PROGMEM delete_combo_hj[] = {KC_H, CTL_J, COMBO_END};
const uint16_t PROGMEM tictild_combo_rt[] = {KC_R, KC_T, COMBO_END};
const uint16_t PROGMEM quotes_combo_vb[] = {KC_V, KC_B, COMBO_END};
const uint16_t PROGMEM bslashpipe_combo_nm[] = {KC_N, KC_M, COMBO_END};

const uint16_t PROGMEM escape_combo_df[] = {SFT_D, CTL_F, COMBO_END};
const uint16_t PROGMEM backspace_combo_ui[] = {KC_U, KC_I, COMBO_END};
const uint16_t PROGMEM delete_combo_jk[] = {CTL_J, SFT_K, COMBO_END};
const uint16_t PROGMEM tictild_combo_er[] = {KC_E, KC_R, COMBO_END};
const uint16_t PROGMEM quotes_combo_cv[] = {KC_C, KC_V, COMBO_END};
const uint16_t PROGMEM bslashpipe_combo_mcma[] = {KC_M, KC_COMM, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(appkey_combo_commaperiod, KC_APP),
    COMBO(escape_combo_fg, KC_ESC),
    COMBO(backspace_combo_yu, KC_BSPC),
    COMBO(delete_combo_hj, KC_DEL),
    COMBO(tictild_combo_rt, KC_GRV),
    COMBO(quotes_combo_vb, KC_QUOT),
    COMBO(bslashpipe_combo_nm, KC_BSLS),

    COMBO(escape_combo_df, KC_ESC),
    COMBO(backspace_combo_ui, KC_BSPC),
    COMBO(delete_combo_jk, KC_DEL),
    COMBO(tictild_combo_er, KC_GRV),
    COMBO(quotes_combo_cv, KC_QUOT),
    COMBO(bslashpipe_combo_mcma, KC_BSLS),
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
        case IN_ENT1:
        case IN_SPC2:
        case IN_TAB3:
        case IN_SPC3:
        case ALT_S:
        case ALT_L:
            return TAPPING_TERM_MORE;
        case GUI_SCLN:
        case GUI_A:
            return TAPPING_TERM_EVEN_MORE;
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

void matrix_init_user(void) {
   backlight_enable();
   backlight_level(3);
   rgblight_enable(); // Enable RGB by default
   rgblight_sethsv(0, 255, 40);  // Set default HSV - red hue, full saturation, full brightness
   rgblight_mode(RGBLIGHT_MODE_STATIC_LIGHT);
}