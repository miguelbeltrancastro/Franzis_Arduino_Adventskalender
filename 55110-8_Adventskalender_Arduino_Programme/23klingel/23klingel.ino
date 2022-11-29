//23klingel
//Franzis Adventskalender für Arduino

int leds[] = {3, 4, 6, 8};
int rot = 11;
int gruen = 10;
int blau = 9;
int taste = 7;
int poti = A7;
int sensor = A2;
int n = 4;
int s = 800;
int w = 4;

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(rot, OUTPUT);
  pinMode(gruen, OUTPUT);
  pinMode(blau, OUTPUT);
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
    for(int j = 0; j < w; j++) {
      for(int i = 0; i < n; i++) {
        digitalWrite(leds[i], HIGH);
        delay(analogRead(poti));    
        digitalWrite(leds[i], LOW);
      }
    }
  }
}
