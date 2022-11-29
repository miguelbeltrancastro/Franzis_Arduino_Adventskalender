//22licht
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
bool r = false;

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
  if(digitalRead(taste) == HIGH) {
    while(digitalRead(taste) == HIGH) {
      digitalWrite(LED_BUILTIN, HIGH);
    }
    digitalWrite(LED_BUILTIN, LOW);
    r = !r; 
  }
  if(r) {
    for(int i = 0; i < n; i++) {
      digitalWrite(leds[i], HIGH);
      delay(analogRead(poti));
      digitalWrite(leds[i], LOW);
      if(analogRead(sensor) > s) {
        digitalWrite(rot, HIGH);
        digitalWrite(gruen, HIGH);
        digitalWrite(blau, HIGH);
      }
      else {
        digitalWrite(rot, LOW);
        digitalWrite(gruen, LOW);
        digitalWrite(blau, LOW);
      }
    }
  }
  else {
    for(int i = 0; i < n; i++) {
      digitalWrite(leds[i], LOW);
    }
  }
}
