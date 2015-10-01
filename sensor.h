#ifndef SENSOR_H
#define SENSOR_H


#include "config.h"


extern float sensors_adjust[NUM_AXIES];
extern float sensors_expected[NUM_AXIES];
extern float sensors_filtered[NUM_AXIES];


void tick_sensors();
uint32_t sensor_update(int csel,int sdout);

float sensor_angle(uint32_t data);
int sensor_error(uint32_t data,int beVerbose);


#endif  // SENSOR_H
