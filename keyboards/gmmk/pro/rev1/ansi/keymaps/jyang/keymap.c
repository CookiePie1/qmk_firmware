#include QMK_KEYBOARD_H

#define NUM_SIDE_LED 8
#define NUM_BLUE 29
#define NUM_RED 30
#define NUM_YELLOW 24


/* THIS FILE WAS GENERATED!
 *
 * This file was generated by qmk json2c. You may or may not want to
 * edit it directly.
 */

 // need to recompile and reflash with fixed pgdn/reopen closed tab


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
        [0] = LAYOUT(KC_ESC, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_DEL, LT(2,KC_MPLY), KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPC, QK_MACRO_16, KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS, QK_MACRO_18, KC_CAPS, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT, KC_HOME, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_UP, KC_END, KC_LCTL, KC_LGUI, KC_LALT, LT(3,KC_SPC), KC_RALT, TO(1), KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT),
        [1] = LAYOUT(KC_ESC, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_DEL, LT(2,KC_MPLY), KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_LBRC, KC_RBRC, KC_BSPC, QK_MACRO_16, KC_TAB, KC_QUOT, KC_COMM, KC_DOT, KC_P, KC_Y, KC_F, KC_G, KC_C, KC_R, KC_L, KC_SLSH, KC_EQL, KC_BSLS, QK_MACRO_17, KC_CAPS, KC_A, KC_O, KC_E, KC_U, KC_I, KC_D, KC_H, KC_T, KC_N, KC_S, KC_MINS, KC_ENT, KC_HOME, KC_LSFT, KC_SCLN, KC_Q, KC_J, KC_K, KC_X, KC_B, KC_M, KC_W, KC_V, KC_Z, KC_RSFT, KC_UP, KC_END, KC_LCTL, KC_LGUI, KC_LALT, LT(2,KC_SPC), KC_RALT, TO(0), KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT),
        [2] = LAYOUT(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, RGB_TOG, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, QK_MACRO_0, QK_MACRO_1, QK_MACRO_2, QK_MACRO_3, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, QK_MACRO_4, QK_MACRO_5, QK_MACRO_6, QK_MACRO_7, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO),
        [3] = LAYOUT(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, RGB_TOG, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, QK_MACRO_10, QK_MACRO_11, QK_MACRO_12, QK_MACRO_13, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, QK_MACRO_14, QK_MACRO_5, QK_MACRO_6, QK_MACRO_15, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO)
};
// z - slash
// x - b
// c - i
// v - dot
// s - scln
// l - p
// t - k
// keyboard in dvorak -> layer 2 is correct (original macros), computer is in qwerty
// keyboard in qwerty, computer in dvorak ->
#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] = { ENCODER_CCW_CW(QK_MACRO_9, QK_MACRO_8) },
    [1] = { ENCODER_CCW_CW(QK_MACRO_9, QK_MACRO_8) },
    [2] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [3] = { ENCODER_CCW_CW(QK_MACRO_9, QK_MACRO_8) }
};
#endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed) {
        switch (keycode) {
            // US and independent macros vv
            case QK_MACRO_0:
                SEND_STRING(SS_DOWN(X_LCTL)SS_TAP(X_Z)SS_UP(X_LCTL));
                return false;
            case QK_MACRO_1:
                SEND_STRING(SS_DOWN(X_LCTL)SS_TAP(X_X)SS_UP(X_LCTL));
                return false;
            case QK_MACRO_2:
                SEND_STRING(SS_DOWN(X_LCTL)SS_TAP(X_C)SS_UP(X_LCTL));
                return false;
            case QK_MACRO_3:
                SEND_STRING(SS_DOWN(X_LCTL)SS_TAP(X_V)SS_UP(X_LCTL));
                return false;
            case QK_MACRO_4:
                SEND_STRING(SS_DOWN(X_LGUI)SS_DOWN(X_LSFT)SS_TAP(X_S)SS_UP(X_LSFT)SS_UP(X_LGUI));
                return false;
            case QK_MACRO_5:
                SEND_STRING(SS_DOWN(X_LCTL)SS_TAP(X_LEFT)SS_UP(X_LCTL));
                return false;
            case QK_MACRO_6:
                SEND_STRING(SS_DOWN(X_LCTL)SS_TAP(X_RGHT)SS_UP(X_LCTL));
                return false;
            case QK_MACRO_7:
                SEND_STRING(SS_DOWN(X_LGUI)SS_TAP(X_L)SS_UP(X_LGUI));
                return false;
            case QK_MACRO_8: // right chrome tab
                SEND_STRING(SS_DOWN(X_LCTL)SS_TAP(X_TAB)SS_UP(X_LCTL));
                return false;
            case QK_MACRO_9: // left chrome tab
                SEND_STRING(SS_DOWN(X_LCTL)SS_DOWN(X_LSFT)SS_TAP(X_TAB)SS_UP(X_LSFT)SS_UP(X_LCTL));
                return false;
                // DV macros vv
            case QK_MACRO_10:
                SEND_STRING(SS_DOWN(X_LCTL)SS_TAP(X_SLSH)SS_UP(X_LCTL));
                return false;
            case QK_MACRO_11:
                SEND_STRING(SS_DOWN(X_LCTL)SS_TAP(X_B)SS_UP(X_LCTL));
                return false;
            case QK_MACRO_12:
                SEND_STRING(SS_DOWN(X_LCTL)SS_TAP(X_I)SS_UP(X_LCTL));
                return false;
            case QK_MACRO_13:
                SEND_STRING(SS_DOWN(X_LCTL)SS_TAP(X_DOT)SS_UP(X_LCTL));
                return false;
            case QK_MACRO_14:
                SEND_STRING(SS_DOWN(X_LGUI)SS_DOWN(X_LSFT)SS_TAP(X_SCLN)SS_UP(X_LSFT)SS_UP(X_LGUI));
                return false;
            case QK_MACRO_15:
                SEND_STRING(SS_DOWN(X_LGUI)SS_TAP(X_P)SS_UP(X_LGUI));
                return false;
                // end dv macros
            case QK_MACRO_16: // change active window
                SEND_STRING(SS_DOWN(X_LALT)SS_DOWN(X_LSFT)SS_TAP(X_TAB)SS_UP(X_LSFT)SS_UP(X_LALT));
                return false;
            case QK_MACRO_17: //qwerty open closed tab
                SEND_STRING(SS_DOWN(X_LCTL)SS_DOWN(X_LSFT)SS_TAP(X_T)SS_UP(X_LSFT)SS_UP(X_LCTL));
                return false;
            case QK_MACRO_18: //dvorak open closed tab
                SEND_STRING(SS_DOWN(X_LCTL)SS_DOWN(X_LSFT)SS_TAP(X_K)SS_UP(X_LSFT)SS_UP(X_LCTL));
                return false;
        }
    }

    return true;
};

bool encoder_update_user(uint8_t index, bool clockwise) {
if (clockwise) {
SEND_STRING(SS_DOWN(X_LCTL)SS_TAP(X_RGHT)SS_UP(X_LCTL));
} else {
SEND_STRING(SS_DOWN(X_LCTL)SS_TAP(X_LEFT)SS_UP(X_LCTL));
}
return true;
}


// RGB LED layout

// led number, function of the key

//  67, Side led 01    0, ESC      6, F1       12, F2       18, F3       23, F4       28, F5       34, F6       39, F7       44, F8       50, F9       56, F10      61, F11      66, F12      69, del       Rotary(Mute)   68, Side led 12
//  70, Side led 02    1, ~        7, 1        13, 2        19, 3        24, 4        29, 5        35, 6        40, 7        45, 8        51, 9        57, 0        62, [       78, ]     85, BackSpc   72, pgup        71, Side led 13
//  73, Side led 03    2, Tab      8, '        14, ,        20. .        25, p        30, y        36, f        41, g        46, c        52, r        58, l        63, /       89, =       93, \|        75, pgdn       74, Side led 14
//  76, Side led 04    3, Caps     9, A        15, o        21, e        26, u        31, i        37, d        42, h        47, t        53, n        59, s       64, -                    96, Enter     86, home       77, Side led 15
//  80, Side led 05    4, Sh_L     10, ;       16, q        22, j        27, k        32, x        38, b        43, m        48, w       54, v       60, z                    90, Sh_R     94, Up        82, End        81, Side led 16
//  83, Side led 06    5, Ct_L     11,Win_L    17, Alt_L                              33, SPACE                              49, Alt_R    55, FN                    65, Ct_R     95, Left     97, Down      79, Right      84, Side led 17
//  87, Side led 07                                                                                                                                                                                                        88, Side led 18
//  91, Side led 08                                                                                                                                                                                                        92, Side led 19

bool rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
   
        for (int i = led_min; i <= led_max; i++) { // change all colors 
            RGB_MATRIX_INDICATOR_SET_COLOR(i, 0, 0, 0); // all off, side LEDs below

        }
    
    int side_led_left[NUM_SIDE_LED] = {67, 70, 73, 76, 80, 83, 87, 91};
    int side_led_right[NUM_SIDE_LED] = {68, 71, 74, 77, 81, 84, 88, 92};
    for (int i = 0; i < NUM_SIDE_LED; i++) {
        RGB_MATRIX_INDICATOR_SET_COLOR(side_led_left[i], 0, 0, 255); //left side blue
        RGB_MATRIX_INDICATOR_SET_COLOR(side_led_right[i], 255, 255, 0); // right side yellow
    }

    /*

    int blue_keys[NUM_BLUE] = {0, 6, 1, 7, 13, 2, 8, 14, 20, 25, 3, 9, 15, 21, 26, 31, 37, 4, 10, 16, 22, 27, 32, 38, 5, 11, 17, 33};
    int red_keys[NUM_RED] = {12, 18, 23, 28, 34, 39, 19, 24, 29, 35, 40, 45, 51, 30, 36, 41, 46, 52, 58, 42, 47, 53, 59, 43, 48, 54, 60, 49, 55, 65};
    int yellow_keys[NUM_YELLOW] = {44, 50, 56, 61, 66, 69, 57, 62, 78, 85, 72, 63, 89, 93, 75, 64, 96, 86, 90, 94, 82, 95, 97, 79};

    for (int i = 0; i < NUM_BLUE; i++) {
        RGB_MATRIX_INDICATOR_SET_COLOR(blue_keys[i], 0, 0, 200);

    }
    for (int i = 0; i < NUM_RED; i++) {
        RGB_MATRIX_INDICATOR_SET_COLOR(red_keys[i], 255, 0, 0);
    }
    for (int i = 0; i < NUM_YELLOW; i++) {
        RGB_MATRIX_INDICATOR_SET_COLOR(yellow_keys[i], 225, 225, 0);
    }
    */

    // red caps indicator
    if (host_keyboard_led_state().caps_lock) {
        RGB_MATRIX_INDICATOR_SET_COLOR(67,255,0,0);
        RGB_MATRIX_INDICATOR_SET_COLOR(91,255,0,0);
        RGB_MATRIX_INDICATOR_SET_COLOR(68,255,0,0);
        RGB_MATRIX_INDICATOR_SET_COLOR(92,255,0,0);
    }
    return false;
}

