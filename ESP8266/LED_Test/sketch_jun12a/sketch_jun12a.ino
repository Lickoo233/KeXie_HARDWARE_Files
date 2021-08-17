float x,y,z;
static s16 _data[36] = {0};
static int data_num = 0;
#define unsigned short u16
#define signed short s16
static s16 x_angle;
static s16 y_angle;
static s16 z_angle;
static u16 c_angle;


void setup(){
//    Serial1.begin(9600);
    Serial.begin(9600);
//    Serial.println((s16)0xFF60);
//    Serial.println((s16)(255 << 8 | 96));
}
void loop()
{
  while(Serial.available() >0)
  {
    s16 temp = Serial.read();
    if(temp <= 90 && temp >= 65)
      _data[data_num] = temp - 55;
    else
      _data[data_num] = temp - 48;
//    Serial.println(_data[data_num]);
//    Serial.println(data_num);
    data_num++;
  }
  if(data_num == 35){
    data_num = 0;
    c_angle = (u16)(_data[9] << 12 | _data[10] << 8 | _data[12] << 4 | _data[13]);
    x_angle = (s16)(_data[15] << 12 | _data[16] << 8 | _data[18] << 4 | _data[19]);
    y_angle = (s16)(_data[21] << 12 | _data[22] << 8 | _data[24] << 4 | _data[25]);
    z_angle = (s16)(_data[27] << 12 | _data[28] << 8 | _data[30] << 4 | _data[31]);
//    Serial.println(c_angle);
//    Serial.println(" ");
//    Serial.println(x_angle);
//    Serial.println(" ");
//    Serial.println(y_angle); 
//    Serial.println(" ");
//    Serial.println(z_angle);
//    Serial.println(data_num);
    Serial.println("当前角度为：  x/y/z");
    Serial.println((float)x_angle / c_angle);
    Serial.println((float)y_angle / c_angle);
    Serial.println((float)z_angle / c_angle);
  }
}

/*
测试数据：
AA 09 01 00 0A FF 60 01 73 FE 60 EF
X 轴倾斜角度：0x FF60，十进制-160，即-16.0 度
Y 轴倾斜角度：0x0173，十进制 371，即 37.1 度
Z 轴倾斜角度：0xFE60，十进制-416，即-41.6 度
*/
