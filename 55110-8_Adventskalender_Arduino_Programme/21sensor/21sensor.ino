//21sensor
//Franzis Adventskalender für Arduino

int leds[] = {3, 4, 6, 8};
int rot = 11;
int blau = 9;
int taste = 7;
int poti = A7;
int sensor0 = A0;
int sensor1 = A1;
int n = 4;
int s = 500;
int z = 10;
bool r = false;

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(rot, OUTPUT);
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
      if(analogRead(sensor0) < s) {
        digitalWrite(rot, HIGH);
        delay(z);
        digitalWrite(rot, LOW);
      }
      if(analogRead(sensor1) < s) {
        digitalWrite(blau, HIGH);
        delay(z);
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
