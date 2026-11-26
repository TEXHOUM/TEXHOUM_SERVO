# TEXHOUM_SERVO

**Данная библиотека для Arduino IDE позволяет управлять сервомоторами.**

**This is a library for Arduino IDE. It allows to work with servo motors.**


Библиотека задействует для управления одним мотором один цифровой пин на плате Arduino.

## Назначение функций:

```C++
#include <TEXHOUM_SERVO.h> // Подключаем библиотеку
```

**Поворот мотора в заданное положение** 

```C++
servo1.rotate(0); // Поворот сервомотора в положение 0°
servo1.rotate(180); // Поворот мотора в положение 180°
servo1.rotate(170); // Поворот мотора в положение 170°
// При выполнении последней команды мотор совершит поворот на 10°!
```

**Удержание положения в течение заданного времени** 

```C++
servo2.hold(90, 10.5) // Удержание положения 90° в течение 10.5 секунд
```

**Переназначение и добавление сервомоторов** 

При необходимости вы можете добавить новые сервомоторы или переназначить пины существующих:
```C++
SERVO servo1(50);	// переназначение пинов сервомотора 1
SERVO servo5(40);	// добавление нового сервомотора
```

## Установка
#### Вариант 1:
- На [странице релизов](https://github.com/TEXHOUM/TEXHOUM_SERVO/releases) скачайте TEXHOUM_SERVO.zip
- В Arduino IDE откройте проект, в верхнем меню выберите `Скетч (Sketch)` -> `Подключить библиотеку (Include library)` -> `Добавить .zip библиотеку (Add .zip library)` и выберите загруженный архив.

#### Вариант 2:
- В Arduino IDE откройте проект, в верхнем меню выберите `Инструменты (Tools)` -> `Управлять библиотеками (Manage libraries)`
- В поле поиска введите название библиотеки и нажмите `Установить`.

---

## Purpose of the functions:
```C++
#include <TEXHOUM_SERVO.h> // Include the library
```
**Rotate the motor to a specified position** 
```C++
servo1.rotate(0); // Rotate the servo motor to the 0° position
servo1.rotate(180); // Rotate the motor to the 180° position
servo1.rotate(170); // Rotate the motor to the 170° position
// When executing the last command, the motor will rotate by 10°!
```
**Holding the position for a specified time** 
```C++
servo2.hold(90, 10.5) // Hold the 90° position for 10.5 seconds
```
**Reassigning and adding servo motors** 
If necessary, you can add new servo motors or reassign the pins of existing ones:
```C++
SERVO servo1(50);	// reassigning the pins of servo motor 1
SERVO servo5(40);	// adding a new servo motor
```
## Installation
#### Option 1:
- On the [releases page](https://github.com/TEXHOUM/TEXHOUM_SERVO/releases) download TEXHOUM_SERVO.zip
- In Arduino IDE open the project, in the top menu select `Sketch` -> `Include library` -> `Add .zip library` and select the downloaded archive.

#### Option 2:
- In Arduino IDE open the project, in the top menu select `Tools` -> `Manage libraries`
- In the search field enter the library name and click `Install`.
