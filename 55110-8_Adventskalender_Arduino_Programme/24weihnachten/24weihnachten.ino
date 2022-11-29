//24weihnachten
//Franzis Adventskalender für Arduino

#include "pitches.h"

int leds[] = {3, 4, 6, 8};
int n = 4;
int rot = 11;
int gruen = 10;
int blau = 9;
int taste = 7;
int summer = 5;
int poti = A7;
int sensor = A2;
int s = 800;
int noten[] = {NOTE_C3, NOTE_C3, NOTE_G3, NOTE_G3, NOTE_A3, NOTE_A3, NOTE_G3,
               NOTE_F3, NOTE_F3, NOTE_E3, NOTE_E3, NOTE_D3, NOTE_C3,
               NOTE_G3, NOTE_G3, NOTE_F3, NOTE_F3, NOTE_E3, NOTE_E3, NOTE_D3,
               NOTE_G3, NOTE_G3, NOTE_F3, NOTE_F3, NOTE_E3, NOTE_E3, NOTE_D3,
               NOTE_C3, NOTE_C3, NOTE_G3, NOTE_G3, NOTE_A3, NOTE_A3, NOTE_G3,
               NOTE_F3, NOTE_F3, NOTE_E3, NOTE_E3, NOTE_D3, NOTE_C3};
int dauer[] = {4, 4, 4, 4, 4, 4, 2, 
               4, 4, 4, 4, 2, 2, 
               4, 4, 4, 4, 4, 4, 2,
               4, 4, 4, 4, 4, 4, 2,
               4, 4, 4, 4, 4, 4, 2,
               4, 4, 4, 4, 2, 2};
int m = 40;
float p = 1.30;

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(rot, OUTPUT);
  pinMode(gruen, OUTPUT);
  pinMode(blau, OUTPUT);
  pinMode(summer, OUTPUT);
  pinMode(taste, INPUT);
  for(int i = 0; i < n; i++) {
    pinMode(leds[i], OUTPUT);
  }
}

void loop() {
  if(analogRead(sensor) > s) {
    digitalWrite(rot, HIGH);
    delay(analogRead(poti));
    digitalWrite(gruen, HIGH);
    delay(analogRead(poti));
    digitalWrite(rot, LOW);
    delay(analogRead(poti));
    digitalWrite(blau, HIGH);
    delay(analogRead(poti));
    digitalWrite(gruen, LOW);
    delay(analogRead(poti));
    digitalWrite(rot, HIGH);
    delay(analogRead(poti));
    digitalWrite(blau, LOW);
  }
  else {
    digitalWrite(rot, LOW);
    digitalWrite(gruen, LOW);
    digitalWrite(blau, LOW);
  }
  if(digitalRead(taste) == HIGH) {
    while(digitalRead(taste) == HIGH) {
      digitalWrite(LED_BUILTIN, HIGH);
    }
    digitalWrite(LED_BUILTIN, LOW);
    for(int i = 0; i < n; i++) {
      digitalWrite(leds[i], HIGH);
    }
    for(int i = 0; i < m; i++) {
      tone(summer, noten[i], analogRead(poti) / dauer[i]);
      delay((analogRead(poti) / dauer[i]) * p);
      noTone(summer);
    }
    for(int i = 0; i < n; i++) {
      digitalWrite(leds[i], LOW);
    }
  }
}
