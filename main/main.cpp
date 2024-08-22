#include <stdio.h>
#include "SevenSegment.h"

SevenSegment s1(0);
SevenSegment s2(4);

extern "C" void app_main(void)
{
    while (1)
    {
        s1.DisplayNumber(1); 
        s1.DisplayON(); 
        vTaskDelay(10 / portTICK_PERIOD_MS); 
        s1.DisplayOFF(); 

        s2.DisplayNumber(5); 
        s2.DisplayON(); 
        vTaskDelay(10 / portTICK_PERIOD_MS);
        s2.DisplayOFF(); 
    }
    
}