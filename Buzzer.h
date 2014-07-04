/*
  Buzzer.h - Library for KY-006 active buzzer module.
*/
#ifndef Buzzer_h
#define Buzzer_h

#include "Arduino.h"

class Buzzer {
  public:
    Buzzer(int pin);
    Buzzer(int pin, int frequency);
    Buzzer(int pin, int frequency, int duration);
    int buzz();
    void setFrequency(int frequency);
    void setDuration(int duration);
  private:
    int _pin;
};

#endif
