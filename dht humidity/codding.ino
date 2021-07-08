#include<DHT.h>
DHT dht(2,DHT11);
void setup()
{
  Serial.begin(9600);
  dht.begin();
}
void loop()
{
  float h=dht.readHumidity();
  float i=dht.readTemperature();
  float j=dht.readTemperature(true);
  float k=i+273.5;
  Serial.print("HUMIDITY:  " +String(h)+"%");
  Serial.print("TEMPERATURE IN C:   " +String(i)+"*C");
  Serial.print("TEMPERATURE IN F:  "+String(j)+"*F");
  Serial.print("TEMPERATURE IN KELVIN:   "+String(k)+"*K");
  delay(1000);
}

