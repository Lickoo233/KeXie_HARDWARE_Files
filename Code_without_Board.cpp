#include <ESP8266WiFi.h>
#include <Epaper.h>

#define LED_B 0x01  //串口数据
#define LED_R 0x02

void setup()  //执行一次
{
    Serial.begin(115200);  //启用串口
    while(! Display_Init());
    while(! is_WiFiSTA_ok());
}

void loop  //循环执行
{

}

bool is_WiFiSTA_ok  //完成配网
{

}

bool Display_Init  //墨水屏初始化
{

}

void Display  //显示墨水屏秒数和天气
{

}

