#pragma once

#include_next <mcuconf.h>

/* serial driver configuration*/
#undef STM32_SERIAL_USE_USART2
#define STM32_SERIAL_USE_USART2 TRUE

/* I2C driver configuration*/
#undef STM32_I2C_USE_I2C1
#define STM32_I2C_USE_I2C1 TRUE