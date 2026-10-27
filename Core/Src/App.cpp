#include "App.hpp"
#include "Led.hpp"
#include "main.h"

extern "C" void AppRun(void) {
    static Led ledVerde(LED_VERDE_GPIO_Port, LED_VERDE_Pin);
    static Led ledAmarillo(LED_AMARILLO_GPIO_Port, LED_AMARILLO_Pin);
    static Led ledRojo(LED_ROJO_GPIO_Port, LED_ROJO_Pin);

    while (1) {
        ledVerde.encender();
        HAL_Delay(500);
        ledVerde.apagar();

        ledAmarillo.encender();
        HAL_Delay(500);
        ledAmarillo.apagar();

        ledRojo.encender();
        HAL_Delay(500);
        ledRojo.apagar();
    }
}