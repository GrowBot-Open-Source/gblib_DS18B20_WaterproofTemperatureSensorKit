/*********************************************************************
 * gb_DS20S20_WaterproofTemperatureSensorKit_h
 *
 * Copyright (C)    20124   [GrowBot Open Source],
 * GitHub Link :XXXXX
 * This Library is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Description:Implement DFRobot DS20S20 waterproof temperature sensor kit into the growbot system
 *
 * Product Links：
 *
 * Sensor driver pin：
 * Connection:
 * VCC-5v
 * GND-GND
 * SCL-SCL(analog pin 5)
 * SDA-SDA(analog pin 4)
 * ADD-NC
 *
 * author  :  GrowBot
 * version :  V1.0
 * date    :  2024-05-14
 **********************************************************************/

#ifndef gb_DS20S20_WaterproofTemperatureSensorKit_h
#define gb_DS20S20_WaterproofTemperatureSensorKit_h

#include <Arduino.h>

class gb_DS20S20_WaterproofTemperatureSensorKit
{
private:
    int DS18S20_Pin;

public:
    // init sensor object
    gb_DS20S20_WaterproofTemperatureSensorKit(int DS18S20_Pin);

    // get temperature
    double getWaterproofTemp();
};

#endif