#include <Arduino.h>
#include <U8g2lib.h>
#ifdef U8X8_HAVE_HW_SPI
#include <SPI.h>
#endif
#ifdef U8X8_HAVE_HW_I2C
#include <Wire.h>
#endif
#define unsigned short u16
#define signed short s16

U8G2_SH1106_128X64_NONAME_F_HW_I2C u8g2(U8G2_R0, /* reset=*/ U8X8_PIN_NONE);

float x,y,z;
static s16 _data[12];
static int data_num = 0;
static s16 x_angle;
static s16 y_angle;
static s16 z_angle;
static u16 c_angle;
byte get_data[4] = {0xAA,0x01,0x01,0xAC};
static char xarr[3];
static char yarr[3];
static char zarr[3];

void setup(){
    u8g2.begin();
    u8g2.clearBuffer();
    Serial.begin(9600);
    u8g2.setFont(u8g2_font_ncenB08_tr); // choose a suitable font
    u8g2.drawStr(16,32,"Module Test OK!");
    u8g2.sendBuffer();
    delay(500);
}
void loop()
{
//  for(;send_num < 4;send_num++)
    Serial.write(get_data,4);
  while(Serial.available() > 0)
  {
    _data[data_num] = Serial.read();
    data_num++;
  }
    x_angle = (s16)(_data[5] << 8 | _data[6]);
    y_angle = (s16)(_data[7] << 8 | _data[8]);
    z_angle = (s16)(_data[9] << 8 | _data[10]);
//    Serial.println("当前角度为：  x/y/z");
//    Serial.println((float)x_angle / 10);
//    Serial.println((float)y_angle / 10);
//    Serial.println((float)z_angle / 10);
    u8g2.clearBuffer();          // clear the internal memory
    u8g2.drawStr(0,15,"Degree Test:");  // write something to the internal memory
    u8g2.drawHLine(4,17,124);
    u8g2.drawStr(0,32,"X:");
    u8g2.drawStr(0,47,"Y:");
    u8g2.drawStr(0,59,"Z:");                                           
    u8g2.drawStr(15,32,itoa(x_angle / 10,xarr,10));
    u8g2.drawStr(15,47,itoa(y_angle / 10,yarr,10));
    u8g2.drawStr(15,59,itoa(z_angle / 10,zarr,10));
    u8g2.sendBuffer(); 
    data_num = 0;
}

/*
测试数据：
AA 01 01 AC
AA 09 01 00 0A FF 60 01 73 FE 60 EF
X 轴倾斜角度：0x FF60，十进制-160，即-16.0 度
Y 轴倾斜角度：0x0173，十进制 371，即 37.1 度
Z 轴倾斜角度：0xFE60，十进制-416，即-41.6 度
*/
