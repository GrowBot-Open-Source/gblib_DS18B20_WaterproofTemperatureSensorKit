#ifndef gb_DS20S20_WaterproofTemperatureSensorKit.h
#define gb_DS20S20_WaterproofTemperatureSensorKit.h

#include <Arduino.h>

class gb_DS20S20_WaterproofTemperatureSensorKit
{
private:
    int DS18S20_Pin;
public:
    gb_DS20S20_WaterproofTemperatureSensorKit(int DS18S20_Pin);
    double getWaterproofTemp();
};

#endif