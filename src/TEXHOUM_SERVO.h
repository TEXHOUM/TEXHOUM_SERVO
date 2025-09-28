// Библиотека для управления сервоприводами
// Library for controlling servo motors

// Версия: 1.0
// Автор библиотеки: Коркин Максим, Пятов Антон

#ifndef TEXHOUM_SERVO_h
#define TEXHOUM_SERVO_h
#include <Arduino.h>

class	SERVO {
  public:
    SERVO(byte pin_DIG);	                //  инициализация (pin dig)
    void rotate(int degree);		        //  поворот сервомотора (угол от 0 до 180)
    void hold(int degree, int time);            //  угол поворота в градусах от 0 до 180 и время в секундах
  private:
    byte _pin_SERVO;		                //  номер пина
};

extern SERVO servo1;
extern SERVO servo2;

#endif
