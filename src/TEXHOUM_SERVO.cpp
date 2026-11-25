#include "TEXHOUM_SERVO.h"

// инициализация модуля
SERVO::SERVO(byte pin_DIG) {
  _pin_SERVO=pin_DIG; pinMode(_pin_SERVO, OUTPUT);   //  инициализация сигнального пина
  digitalWrite(_pin_SERVO, LOW);
}
// поворот сервомотора на заданный угол
void SERVO::rotate(int degree) {

  degree = constrain(degree, 0, 180);

  for (int i = 0; i < 20; i++) {
    int pulse = map(degree, 0, 180, 500, 2500); // перевод граудсов в длительность импульса
    digitalWrite(_pin_SERVO, HIGH);
    delayMicroseconds(pulse);
    digitalWrite(_pin_SERVO, LOW);
    delay(20); // 50 Hz
  }
}

void SERVO::hold(int degree, float time) {

  degree = constrain(degree, 0, 180); // ограничение угла

  if (time <= 0)
    return;

  int pulse = map(degree, 0, 180, 500, 2500);
  unsigned long startTime = millis();
  unsigned long duration = (unsigned long)(time * 1000.0f);

  while (millis() - startTime < duration) {
    digitalWrite(_pin_SERVO, HIGH);
    delayMicroseconds(pulse);
    digitalWrite(_pin_SERVO, LOW);
    delay(20);
  }
}

SERVO servo1(2);
#if defined(ARDUINO_AVR_MEGA2560) || defined(__AVR_ATmega2560__)
SERVO servo2(13);
#endif
