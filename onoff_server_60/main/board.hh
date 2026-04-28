#pragma once

constexpr uint8_t LED_R = 0;
constexpr uint8_t LED_G = 0;
constexpr uint8_t LED_B = 0;
constexpr uint8_t LED_OFF = 0;
constexpr uint8_t LED_ON = 1;
void board_led_operation(uint8_t pin, uint8_t onoff);

void board_init(void);
