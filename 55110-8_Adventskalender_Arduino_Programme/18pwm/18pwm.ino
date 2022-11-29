//18pwm
//Franzis Adventskalender für Arduino

int ledrot = 3;
int ledgelb = 6;
int taste = 7;
int poti = A7;
bool r = false;

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(ledrot, OUTPUT);
  pinMode(ledgelb, OUTPUT);
  pinMode(taste, INPUT);
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
    analogWrite(ledrot, analogRead(poti) / 4);
    analogWrite(ledgelb, analogRead(poti) / 4);
  }
  else {
    digitalWrite(ledrot, LOW);
    digitalWrite(ledgelb, LOW);
  }
}
