#pragma once
#include "main.h"

extern TIM_HandleTypeDef htim1;
#define gpioHtim (&htim1)
extern TIM_HandleTypeDef htim2;
#define neoPixelHtim htim2
#define neoPixelHtim_TIM_CHANNEL_x TIM_CHANNEL_4
extern TIM_HandleTypeDef htim6;
#define dacAdcHtim htim6
extern UART_HandleTypeDef huart2;
#define dbgHuart huart2
extern I2C_HandleTypeDef hi2c2;
#define trillHi2c hi2c2
extern DAC_HandleTypeDef hdac1;
#define dac0Handle hdac1
#define dac0Channel DAC_CHANNEL_1
#define dac1Handle hdac1
#define dac1Channel DAC_CHANNEL_2
extern ADC_HandleTypeDef hadc2;
#define adcHandle hadc2

// TODO: fix the below
#define DEBUG3_Pin GPIO_PIN_7
#define DEBUG3_GPIO_Port GPIOB