//19pegel
//Franzis Adventskalender für Arduino

int leds[] = {3, 4, 6, 8, 9};
int taste = 7;
int poti = A7;
int n = 5;
bool r = false;

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
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
    int s = analogRead(poti);
    int p = map(s, 0, 1023, 0, n);
    for(int i = 0; i < n; i++) {
      if(i < p) {
        digitalWrite(leds[i], HIGH);
      }
      else {
        digitalWrite(leds[i], LOW);
      }
    }
  }
  else {
    for(int i = 0; i < n; i++) {
      digitalWrite(leds[i], LOW);
    }
  }
}
