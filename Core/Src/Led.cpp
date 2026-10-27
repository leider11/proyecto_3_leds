#include "Led.hpp"
#include "stm32h7xx_hal_gpio.h"

Led::Led(GPIO_TypeDef* puerto, uint16_t pin) : puerto_(puerto), pin_(pin) {}

void Led::encender() {
    HAL_GPIO_WritePin(puerto_, pin_, GPIO_PIN_SET);
}

void Led::apagar() {
    HAL_GPIO_WritePin(puerto_, pin_, GPIO_PIN_RESET);
}