#include QMK_KEYBOARD_H


/* THIS FILE WAS GENERATED!
 *
 * This file was generated by qmk json2c. You may or may not want to
 * edit it directly.
 */

enum custom_keycodes {
    QMKBEST = SAFE_RANGE,
    EXTRUDE,
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
    case ID:
        if (record->event.pressed) {
            // when keycode QMKBEST is pressed
            SEND_STRING("ID ");
        } else {
            // when keycode QMKBEST is released
        }
        break;
    case LIST:
        if (record->event.pressed) {
            // when keycode QMKBEST is pressed
            SEND_STRING("LI ");
        } else {
            // when keycode QMKBEST is released
        }
        break;
    case SCALE:
        if (record->event.pressed) {
            // when keycode QMKBEST is pressed
            SEND_STRING("SC ");
        } else {
            // when keycode QMKBEST is released
        }
        break;
    case UCS:
        if (record->event.pressed) {
            // when keycode QMKBEST is pressed
            SEND_STRING("UCS  ");
        } else {
            // when keycode QMKBEST is released
        }
        break;
    case CIRCLE:
        if (record->event.pressed) {
            // when keycode QMKBEST is pressed
            SEND_STRING("CI ");
        } else {
            // when keycode QMKBEST is released
        }
        break;
    case TRIM:
        if (record->event.pressed) {
            // when keycode QMKBEST is pressed
            SEND_STRING("TR ");
        } else {
            // when keycode QMKBEST is released
        }
        break;
    case STRETCH:
        if (record->event.pressed) {
            // when keycode QMKBEST is pressed
            SEND_STRING("S ");
        } else {
            // when keycode QMKBEST is released
        }
        break;
    case EXPLODE:
        if (record->event.pressed) {
            // when keycode QMKBEST is pressed
            SEND_STRING("X ");
        } else {
            // when keycode QMKBEST is released
        }
        break;
    case COPY:
        if (record->event.pressed) {
            // when keycode QMKBEST is pressed
            SEND_STRING("C ");
        } else {
            // when keycode QMKBEST is released
        }
        break;
    case UNDO:
        if (record->event.pressed) {
            // when keycode QMKBEST is pressed
            SEND_STRING("_UNDO ");
        } else {
            // when keycode QMKBEST is released
        }
        break;
    case LINE:
        if (record->event.pressed) {
            // when keycode QMKBEST is pressed
            SEND_STRING("L ");
        } else {
            // when keycode QMKBEST is released
        }
        break;
    case BREAK:
        if (record->event.pressed) {
            // when keycode QMKBEST is pressed
            SEND_STRING("BR ");
        } else {
            // when keycode QMKBEST is released
        }
        break;
    case UCSLEFT:
        if (record->event.pressed) {
            // when keycode QMKBEST is pressed
            SEND_STRING("UCS G L ");
        } else {
            // when keycode QMKBEST is released
        }
        break;
    case UCSFRNT:
        if (record->event.pressed) {
            // when keycode QMKBEST is pressed
            SEND_STRING("UCS G F ");
        } else {
            // when keycode QMKBEST is released
        }
        break;
    case UCSRGHT:
        if (record->event.pressed) {
            // when keycode QMKBEST is pressed
            SEND_STRING("UCS G R ");
        } else {
            // when keycode QMKBEST is released
        }
        break;
    case UCSBCK:
        if (record->event.pressed) {
            // when keycode QMKBEST is pressed
            SEND_STRING("UCS G BA ");
        } else {
            // when keycode QMKBEST is released
        }
        break;
    case ZEROS:
        if (record->event.pressed) {
            // when keycode QMKBEST is pressed
            SEND_STRING("0,0,0 ");
        } else {
            // when keycode QMKBEST is released
        }
        break;
    case EXTRUDE:
        if (record->event.pressed) {
            // when keycode QMKBEST is pressed
            SEND_STRING("_EXTRUDE ");
        } else {
            // when keycode QMKBEST is released
        }
        break;
    case DISTANCE:
        if (record->event.pressed) {
            // when keycode QMKBEST is pressed
            SEND_STRING("DI ");
        } else {
            // when keycode QMKBEST is released
        }
        break;
    case LAYOFF:
        if (record->event.pressed) {
            // when keycode QMKBEST is pressed
            SEND_STRING("LAYOFF ");
        } else {
            // when keycode QMKBEST is released
        }
        break;
    case ROTATE:
        if (record->event.pressed) {
            // when keycode QMKBEST is pressed
            SEND_STRING("RO ");
        } else {
            // when keycode QMKBEST is released
        }
        break;
    case VSCURRENT2:
        if (record->event.pressed) {
            // when keycode QMKBEST is pressed
            SEND_STRING("_VSCURRENT 2 ");
        } else {
            // when keycode QMKBEST is released
        }
        break;
    case PLAN:
        if (record->event.pressed) {
            // when keycode QMKBEST is pressed
            SEND_STRING("PLAN  ");
        } else {
            // when keycode QMKBEST is released
        }
        break;
    case RECT:
        if (record->event.pressed) {
            // when keycode QMKBEST is pressed
            SEND_STRING("RECT ");
        } else {
            // when keycode QMKBEST is released
        }
        break;
    case EXTEND:
        if (record->event.pressed) {
            // when keycode QMKBEST is pressed
            SEND_STRING("EX ");
        } else {
            // when keycode QMKBEST is released
        }
        break;
    case MIRROR:
        if (record->event.pressed) {
            // when keycode QMKBEST is pressed
            SEND_STRING("MI ");
        } else {
            // when keycode QMKBEST is released
        }
        break;
    case BURST:
        if (record->event.pressed) {
            // when keycode QMKBEST is pressed
            SEND_STRING("BURST ");
        } else {
            // when keycode QMKBEST is released
        }
        break;
    case PRSSPULL:
        if (record->event.pressed) {
            // when keycode QMKBEST is pressed
            SEND_STRING("_PRESSPULL ");
        } else {
            // when keycode QMKBEST is released
        }
        break;
    case MOVE:
        if (record->event.pressed) {
            // when keycode QMKBEST is pressed
            SEND_STRING("M ");
        } else {
            // when keycode QMKBEST is released
        }
        break;
    case REDO:
        if (record->event.pressed) {
            // when keycode QMKBEST is pressed
            SEND_STRING("_REDO ");
        } else {
            // when keycode QMKBEST is released
        }
        break;
    case PLINE:
        if (record->event.pressed) {
            // when keycode QMKBEST is pressed
            SEND_STRING("PL ");
        } else {
            // when keycode QMKBEST is released
        }
        break;
    case VSCURRENTX:
        if (record->event.pressed) {
            // when keycode QMKBEST is pressed
            SEND_STRING("_VSCURRENT X ");
        } else {
            // when keycode QMKBEST is released
        }
        break;
    case SUBTRACT:
        if (record->event.pressed) {
            // when keycode QMKBEST is pressed
            SEND_STRING("_SUBTRACT ");
        } else {
            // when keycode QMKBEST is released
        }
        break;
    case UNION:
        if (record->event.pressed) {
            // when keycode QMKBEST is pressed
            SEND_STRING("_UNION ");
        } else {
            // when keycode QMKBEST is released
        }
        break;
    case INTERSECT:
        if (record->event.pressed) {
            // when keycode QMKBEST is pressed
            SEND_STRING("INTERSECT ");
        } else {
            // when keycode QMKBEST is released
        }
        break;
    case MATCHP:
        if (record->event.pressed) {
            // when keycode QMKBEST is pressed
            SEND_STRING("MA ");
        } else {
            // when keycode QMKBEST is released
        }
        break;
    }
    return true;
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT(
// ┌────────┬────────┬────────┬────────┬────────┬────────────┐                           ┌──────────────┬────────┬────────┬────────┬────────┬────────┐
	KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                                   KC_F6,         KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_BSPC,
// ├────────┼────────┼────────┼────────┼────────┼────────────┤                           ├──────────────┼────────┼────────┼────────┼────────┼────────┤
	KC_CAPS, KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                                    KC_Y,          KC_U,    KC_I,    KC_O,    KC_P,    KC_DEL, 
// ├────────┼────────┼────────┼────────┼────────┼────────────┤                           ├──────────────┼────────┼────────┼────────┼────────┼────────┤
	KC_LSFT, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                                    KC_H,          KC_J,    KC_K,    KC_L,    KC_SCLN, KC_ENT, 
// ├────────┼────────┼────────┼────────┼────────┼────────────┼────────────┐┌─────────────┼──────────────┼────────┼────────┼────────┼────────┼────────┤
	KC_LCTL, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,        KC_CALC,      TG(1),        KC_N,          KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_QUOT, 
// └────────┴────────┴────────┴────────┼────────┼────────────┼────────────┘└─────────────┼──────────────┴────────┴────────┴────────┴────────┴────────┘
		                                KC_LGUI, KC_SPC,      KC_ENT,       LT(2,KC_SPC), LT(1,KC_SPC),  KC_RALT),
//                                     └────────┴────────────┴────────────┘└─────────────┴──────────────┴────────┘
	[1] = LAYOUT(
// ┌────────┬────────┬────────┬────────┬────────┬────────────┐                           ┌──────────────┬────────┬────────┬────────┬────────┬────────┐
	KC_ESC,  KC_TRNS, ID,      LIST,    SCALE,   KC_DEL,                                  KC_F12,        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_BSPC,
// ├────────┼────────┼────────┼────────┼────────┼────────────┤                           ├──────────────┼────────┼────────┼────────┼────────┼────────┤ 
    KC_TAB,  UCS,     CIRCLE,  TRIM,    STRETCH, EXPLODE,                                 KC_MINS,       KC_7,    KC_8,    KC_9,    KC_PLUS, KC_DEL, 
// ├────────┼────────┼────────┼────────┼────────┼────────────┤                           ├──────────────┼────────┼────────┼────────┼────────┼────────┤
	KC_LSFT, KC_TRNS, COPY,    UNDO,    LINE,    BREAK,                                   KC_RBRC,       KC_4,    KC_5,    KC_6,    KC_EQL,  KC_ENT, 
// ├────────┼────────┼────────┼────────┼────────┼────────────┼────────────┐┌─────────────┼──────────────┼────────┼────────┼────────┼────────┼────────┤
	KC_LCTL, KC_TRNS, UCSLEFT, UCSFRNT, UCSRGHT, UCSBCK,      ZEROS,        TG(1),        KC_RCBR,       KC_1,    KC_2,    KC_3,    KC_DOT,  KC_UNDS, 
// └────────┴────────┴────────┴────────┼────────┼────────────┼────────────┘└─────────────┼──────────────┴────────┴────────┴────────┴────────┴────────┘
		                                KC_ENT, LT(2,KC_SPC), LT(2,KC_ENT), LT(2,KC_SPC), LT(1,KC_SPC),  KC_P0),
//                                     └────────┴────────────┴────────────┘└─────────────┴──────────────┴────────┘
	[2] = LAYOUT(
// ┌────────┬────────┬────────┬────────┬────────┬────────────┐                           ┌──────────────┬────────┬────────┬────────┬────────┬────────┐
	KC_ESC,  EXTRUDE, DISTANCE, LAYOFF, ROTATE,  VSCURRENT2,                              KC_TRNS,       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_BSPC,
// ├────────┼────────┼────────┼────────┼────────┼────────────┤                           ├──────────────┼────────┼────────┼────────┼────────┼────────┤
	KC_TRNS, PLAN,    RECT,    EXTEND,  MIRROR,  BURST,                                   KC_CIRC,       KC_HOME, KC_UP,   KC_PGUP, KC_INS,  KC_DEL,
// ├────────┼────────┼────────┼────────┼────────┼────────────┤                           ├──────────────┼────────┼────────┼────────┼────────┼────────┤
	KC_LSFT, PRSSPULL, MOVE,   REDO,    PLINE,   VSCURRENTX,                              KC_UNDS,       KC_LEFT, KC_DOWN, KC_RGHT, KC_ENT,  KC_ENT,
// ├────────┼────────┼────────┼────────┼────────┼────────────┼────────────┐┌─────────────┼──────────────┼────────┼────────┼────────┼────────┼────────┤
	KC_LCTL, SUBTRACT, UNION,  INTERSECT, MATCHP, KC_TRNS,    KC_TRNS,      KC_TRNS,      KC_TRNS,       KC_END,  KC_DOWN, KC_DOWN, KC_TRNS, KC_TRNS,
// └────────┴────────┴────────┴────────┼────────┼────────────┼────────────┘└─────────────┼──────────────┴────────┴────────┴────────┴────────┴────────┘
		                                KC_TRNS, KC_TRNS,     KC_TRNS,      KC_TRNS,      KC_TRNS,       KC_TRNS),
//                                     └────────┴────────────┴────────────┘└─────────────┴──────────────┴────────┘
};

#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {

};
#endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)





