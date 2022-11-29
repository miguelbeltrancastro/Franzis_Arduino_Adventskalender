//12licht
//Franzis Adventskalender für Arduino

int ledrot = 3;
int ledorange = 4;
int ledgelb = 6;
int ledgruen = 8;
int taste = 7;
int blink = 100;
int licht = 1000;
long z = 0;

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(ledrot, OUTPUT);
  pinMode(ledorange, OUTPUT);
  pinMode(ledgelb, OUTPUT);
  pinMode(ledgruen, OUTPUT);
  pinMode(taste, INPUT);
}

void loop() {
  digitalWrite(ledrot, HIGH);
  digitalWrite(ledgelb, LOW);
  digitalWrite(ledgruen, LOW);
  delay(blink);
  digitalWrite(ledrot, LOW);
  digitalWrite(ledgelb, HIGH);
  digitalWrite(ledgruen, LOW);
  delay(blink);
  digitalWrite(ledrot, LOW);
  digitalWrite(ledgelb, LOW);
  digitalWrite(ledgruen, HIGH);
  delay(blink);
  if(digitalRead(taste) == HIGH) {
    while(digitalRead(taste) == HIGH) {
      digitalWrite(LED_BUILTIN, HIGH);
    }
    digitalWrite(LED_BUILTIN, LOW);
    z = millis();
    digitalWrite(ledorange, HIGH);
  }
  if(millis() > z + licht) {
    digitalWrite(ledorange, LOW);
  }
}
