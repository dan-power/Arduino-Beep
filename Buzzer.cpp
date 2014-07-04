#include "Buzzer.h"
#include "Arduino.h"
#include "pitches.h"

int _pin, _frequency = 440, _duration = 200;

Buzzer::Buzzer(int pin) {
  _pin = pin;
}

Buzzer::Buzzer(int pin, int frequency) {
  _pin = pin;
  _frequency = frequency;
}

Buzzer::Buzzer(int pin, int frequency, int duration) {
  _pin = pin;
  _frequency = frequency;
  _duration = duration;
}

void Buzzer::setFrequency(int frequency) {
  _frequency = frequency;
}

void Buzzer::setDuration(int duration) {
  _duration = duration;
}

int Buzzer::buzz() {
  tone(_pin, _frequency, _duration);
  delay(_duration);

  noTone(_pin);
}
