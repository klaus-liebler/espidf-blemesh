#include <stdio.h>

#include "rgbled.hh"
#include "esp_log.h"
#include "board.hh"

#define TAG "BOARD"
RGBLED::M<1, RGBLED::DeviceType::WS2812> rgbled;

void board_led_operation(uint8_t pin, uint8_t onoff)
{
    if(pin==0){
        if(onoff){
            ESP_LOGI(TAG, "Turning red LED on");
            rgbled.SetPixel(0, CRGB::Red, true);
        } else {
            ESP_LOGI(TAG, "Turning red LED off");
            rgbled.SetPixel(0, CRGB::Black, true);
        }
        return;

    }else if(pin==1){
        if(onoff){
            ESP_LOGI(TAG, "Turning green LED on");
            rgbled.SetPixel(0, CRGB::Green, true);
        } else {
            ESP_LOGI(TAG, "Turning green LED off");
            rgbled.SetPixel(0, CRGB::Black, true);
        }
        return;
    }else if(pin==2){
        if(onoff){
            ESP_LOGI(TAG, "Turning blue LED on");
            rgbled.SetPixel(0, CRGB::Blue, true);
        } else {
            ESP_LOGI(TAG, "Turning blue LED off");
            rgbled.SetPixel(0, CRGB::Black, true);
        }
        return;
    }

    ESP_LOGE(TAG, "LED is not found!");
}

void board_init(void)
{
    rgbled.Begin(SPI2_HOST, GPIO_NUM_21);
}
