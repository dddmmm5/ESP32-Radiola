/******************************************************************************
 * 
 * Copyright 2018 karawin (http://www.karawin.fr)
 * Modified for EDP32-Media 2019 SinglWolf (https://serverdoma.ru)
 *
*******************************************************************************/
#ifndef __custom_h__
#define __custom_h__
#include "freertos/FreeRTOS.h"
#include "freertos/timers.h"

void LedBacklightInit();
void LedBacklightOn();
void LedBacklightOff();
void ds18b20Task(void *pvParameters);
void tach_init();
void init_ds18b20();
void TachTimer(TimerHandle_t xTimer);
float getTemperature();
int16_t getRpmFan();

#endif