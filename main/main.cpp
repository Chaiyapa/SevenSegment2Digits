#include <stdio.h>
#include "SevenSegment.h"

SevenSegment s1(0);
SevenSegment s2(4);

extern "C" void app_main(void)
{
    while (1)
    {
        s1.DisplayNumber(1); // แสดงหมายเลข 1 บน s1
        s1.DisplayBlank(); // เปิดการแสดงผล (ใช้ DisplayBlank แทน DisplayOn)
        vTaskDelay(100 / portTICK_PERIOD_MS); // ดีเลย์ 100ms
        s1.DisplayBlank(); // ปิดการแสดงผล (ใช้ DisplayBlank แทน DisplayOff)

        s2.DisplayNumber(5); // แสดงหมายเลข 5 บน s2
        s2.DisplayBlank(); // เปิดการแสดงผล (ใช้ DisplayBlank แทน DisplayOn)
        vTaskDelay(100 / portTICK_PERIOD_MS); // ดีเลย์ 100ms
        s2.DisplayBlank(); // ปิดการแสดงผล (ใช้ DisplayBlank แทน DisplayOff)
    }
}