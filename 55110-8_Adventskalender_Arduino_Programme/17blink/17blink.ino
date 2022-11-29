//17blink
//Franzis Adventskalender für Arduino

int leds[] = {3, 4, 6, 8, 9};
int taste = 7;
int poti = A7;
int i = 0;
int n = 5;
bool r = false;

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(taste, INPUT);
  for(i = 0; i < n; i++) {
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
    for(i = 0; i < n; i++) {
      digitalWrite(leds[i], HIGH);
      delay(analogRead(poti));
      digitalWrite(leds[i], LOW);
    }
  }
  else {
    for(i = 0; i < n; i++) {
      digitalWrite(leds[i], LOW);
    }
  }
}
