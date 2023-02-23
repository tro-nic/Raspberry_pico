/**
 *Tornic primer proyecto desde vs code
 */

#include <stdio.h>
#include "pico/stdlib.h"

int main() {

    const uint LED_PIN = PICO_DEFAULT_LED_PIN;
    gpio_init(LED_PIN);
    gpio_set_dir(LED_PIN, GPIO_OUT);

    stdio_init_all();

    while (true) {
        gpio_put(LED_PIN, 1);
        sleep_ms(500);
        gpio_put(LED_PIN, 0);
        sleep_ms(250);
        printf("Estoy vivo!\r\n"); //Aqui estoy enviando una palabra por el puerto serial
    }

}