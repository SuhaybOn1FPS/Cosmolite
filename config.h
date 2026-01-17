#pragma once

#include "config_common.h"

/* USB */
#define VENDOR_ID  0x239A
#define PRODUCT_ID 0x00F1
#define DEVICE_VER 0x0001
#define MANUFACTURER Andrmda
#define PRODUCT Feather MacroPad

/* Matrix */
#define MATRIX_ROWS 4
#define MATRIX_COLS 3

#define MATRIX_ROW_PINS { GP2, GP3, GP4, GP5 }
#define MATRIX_COL_PINS { GP6, GP7, GP8 }
#define DIODE_DIRECTION COL2ROW

/* Encoders */
#define ENCODERS_PAD_A { GP9,  GP11, GP13 }
#define ENCODERS_PAD_B { GP10, GP12, GP14 }

/* I2C (display slot) */
#define I2C1_SDA_PIN GP20
#define I2C1_SCL_PIN GP21

/* LEDs */
#define RGB_DI_PIN GP16
#define RGBLED_NUM 3
#define RGBLIGHT_LIMIT_VAL 120

/* VIA */
#define VIA_EEPROM_LAYOUT_OPTIONS_SIZE 2
