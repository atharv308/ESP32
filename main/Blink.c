/* Blink Example

   This example code is in the Public Domain (or CC0 licensed, at your option.)

   Unless required by applicable law or agreed to in writing, this
   software is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR
   CONDITIONS OF ANY KIND, either express or implied.
*/
#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"
#include "esp_log.h"
#include "sdkconfig.h"

#define led GPIO_NUM_2

void app_main(void)
{
    gpio_set_direction(led,GPIO_MODE_OUTPUT);
    
    while (1)
    {
        gpio_set_level (led,1);
        vTaskDelay(100);
        gpio_set_level (led,0);
        vTaskDelay(100);
        
    }
    
}
