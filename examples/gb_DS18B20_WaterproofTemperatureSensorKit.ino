#include <gb_DS18B20_WaterproofTemperatureSensorKit.h>

gb_DS18B20_WaterproofTemperatureSensorKit WaterproofTemperatureSensorKit(8);

void setup()
{
    Serial.begin(9600);
}

void loop()
{
    Serial.println(WaterproofTemperatureSensorKit.getWaterproofTemp());
}