/**
 * @file main.c
 */

#include <zephyr/kernel.h>
#include "LED.h"

int main(void) {
    if (LED_init() < 0) {
        return 0;
    }
    LED_blink(LED0, LED_2HZ);
    while (1) {
        k_msleep(1000);
    }

    return 0;
}