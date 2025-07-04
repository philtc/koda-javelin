//---------------------------------------------------------------------------

#pragma once
#include "main_flash_layout.h"

//---------------------------------------------------------------------------

#define JAVELIN_USE_EMBEDDED_STENO 1
#define JAVELIN_USE_USER_DICTIONARY 1
#define JAVELIN_USB_MILLIAMPS 100

#define BOOTSEL_BUTTON_INDEX 42

#define JAVELIN_DEBOUNCE_MS 10
#define JAVELIN_BUTTON_MATRIX 1

constexpr uint8_t COLUMN_PINS[] = {6, 7, 8, 9, 21, 23, 20, 22, 26, 27, 28, 29};
// constexpr uint32_t COLUMN_PIN_MASK = 0xfffffdbc6666;
constexpr uint8_t ROW_PINS[] = {0, 1, 2, 4};
// constexpr uint32_t ROW_PIN_MASK = 0x00000017;


// clang-format off
constexpr int8_t KEY_MAP[4][16] = {
  {  0,  1,  2,  3,  4,  5, /**/  6,  7,  8,  9, 10, 11 },
  { 12, 13, 14, 15, 16, 17, /**/ 18, 19, 20, 21, 22, 23 },
  { 24, 25, 26, 27, 28, 29, /**/ 30, 31, 32, 33, 34, 35 },
  { 43, 44, 45, 36, 37, 38, /**/ 39, 40, 41, 46, 47, 48 },
};
// clang-format on

#define JAVELIN_SCRIPT_CONFIGURATION                                           \
  R"({"name":"Koda","layout":[{"x":0,"y":0},{"x":1,"y":0},{"x":2,"y":0},{"x":3,"y":0},{"x":4,"y":0},{"x":5,"y":0},{"x":7,"y":0},{"x":8,"y":0},{"x":9,"y":0},{"x":10,"y":0},{"x":11,"y":0},{"x":12,"y":0},{"x":0,"y":1},{"x":1,"y":1},{"x":2,"y":1},{"x":3,"y":1},{"x":4,"y":1},{"x":5,"y":1},{"x":7,"y":1},{"x":8,"y":1},{"x":9,"y":1},{"x":10,"y":1},{"x":11,"y":1},{"x":12,"y":1},{"x":0,"y":2},{"x":1,"y":2},{"x":2,"y":2},{"x":3,"y":2},{"x":4,"y":2},{"x":5,"y":2},{"x":7,"y":2},{"x":8,"y":2},{"x":9,"y":2},{"x":10,"y":2},{"x":11,"y":2},{"x":12,"y":2},{"x":3,"y":3},{"x":4,"y":3},{"x":5,"y":3},{"x":7,"y":3},{"x":8,"y":3},{"x":9,"y":3},{"x":12.5,"y":3.5,"s":0.5},{"x":0, "y":3},{"x":1, "y":3},{"x":2, "y":3},{"x":10, "y":3},{"x":11, "y":3},{"x":12, "y":3}]})"


const size_t BUTTON_COUNT = 49;

const char *const MANUFACTURER_NAME = "oddrocket";
const char *const PRODUCT_NAME = "Koda (Javelin)";
const int VENDOR_ID = 0x9000;

//---------------------------------------------------------------------------
