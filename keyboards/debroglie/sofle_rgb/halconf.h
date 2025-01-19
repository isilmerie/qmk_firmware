#pragma once

/* use serial driver for communication between split halves*/
#define HAL_USE_SERIAL TRUE

/* use I2C driver for OLED display*/
#define HAL_USE_I2C TRUE

#include_next <halconf.h>