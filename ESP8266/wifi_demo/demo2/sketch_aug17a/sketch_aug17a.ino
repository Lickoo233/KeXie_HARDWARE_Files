#include <ESP8266WiFi.h>

#define SSID "Test"
#define PASSWD "11111111"

IPAddress local_IP(192,168,4,1);
IPAddress gateway(192,168,4,1);
IPAddress subnet(255,255,255,0);

void setup()
{
  Serial.begin(115200);
  Serial.println("Setting soft-AP configuration");
  WiFi.mode(WIFI_AP);
  Serial.println(WiFi.softAPConfig(local_IP,gateway,subnet) ? "Ready" : "Failed");  //三目
  Serial.println("Setting soft-AP");
  bool res = WiFi.softAP(SSID,PASSWD);
  if(res)
  {
  Serial.println("Ready");
  Serial.println(String("Soft-AP IP Address = ") + WiFi.softAPIP().toString());  //串口输出方式要注意
  Serial.println(String("MAC-Address = ") + WiFi.softAPmacAddress().c_str());
  }
  else
  {Serial.println("Failed");}
  Serial.println("Setup End");
}
33
void loop()
{
  Serial.println(String("Stations connected = ") + WiFi.softAPgetStationNum());
  delay(4000);  //延迟4s 循环输出AP连接数量
}
