#include "TEXHOUM_SERVO.h"

// инициализация модуля
SERVO::SERVO(byte pin_DIG) {
  _pin_SERVO=pin_DIG; pinMode(_pin_SERVO, OUTPUT);   //  инициализация сигнального пина
  digitalWrite(_pin_SERVO, LOW);
}
// поворот сервомотора на заданный угол
void SERVO::rotate(int degree){
  for (int i=0; i<20; i++) {
    int pulse = map(degree, 0, 180, 500, 2500);       // перевод граудсов в длительность импульса
    digitalWrite(_pin_SERVO, HIGH);
    delayMicroseconds(pulse);
    digitalWrite(_pin_SERVO, LOW);
    delay(20);                                        // 50 Hz
  }
}

void SERVO::hold(int degree, int time) {             //  угол поворота в градусах от 0 до 180 и время в секундах
  int t = 0;
  while (t*50 < time*1000) {
    int pulse = map(degree, 0, 180, 500, 2500);      // перевод граудсов в длительность импульса
    digitalWrite(_pin_SERVO, HIGH);
    delayMicroseconds(pulse);
    digitalWrite(_pin_SERVO, LOW);
    delay(20);                                       // 50 Hz
    t+=1;
  }
}

SERVO servo1(13);
SERVO servo2(12);
