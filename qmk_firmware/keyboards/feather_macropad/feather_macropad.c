#include "quantum.h"

bool encoder_update_user(uint8_t index, bool clockwise) {
    switch (index) {
        case 0:
            clockwise ? tap_code(KC_VOLU) : tap_code(KC_VOLD);
            break;
        case 1:
            clockwise ? tap_code(KC_WH_D) : tap_code(KC_WH_U);
            break;
        case 2:
            clockwise ? tap_code(KC_RIGHT) : tap_code(KC_LEFT);
            break;
    }
    return false;
}
