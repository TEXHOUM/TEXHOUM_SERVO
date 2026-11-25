// Библиотека для управления сервоприводами
// Library for controlling servo motors

// Авторы библиотеки: Коркин Максим, Пятов Антон

#ifndef TEXHOUM_SERVO_h
#define TEXHOUM_SERVO_h
#include <Arduino.h>

class	SERVO {
  public:
    SERVO(byte pin_DIG);	                //  инициализация (pin dig)
    void rotate(int degree);		        //  поворот сервомотора (угол от 0 до 180)
    void hold(int degree, float time);            //  угол поворота в градусах от 0 до 180 и время в секундах
  private:
    byte _pin_SERVO;		                //  номер пина
};

extern SERVO servo1;
#if defined(ARDUINO_AVR_MEGA2560) || defined(__AVR_ATmega2560__)
extern SERVO servo2;
#endif
#endif
