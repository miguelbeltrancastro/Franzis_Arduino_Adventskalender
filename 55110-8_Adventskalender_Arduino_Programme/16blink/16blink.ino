//16blink
//Franzis Adventskalender für Arduino

int ledrot = 3;
int ledorange = 4;
int ledgelb = 6;
int ledgruen = 8;
int rot = 11;
int gruen = 10;
int blau = 9;
int taste = 7;
int z1 = 200;
int z2 = 1;
int z3 = 1000;
int n = 0;

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(ledrot, OUTPUT);
  pinMode(ledorange, OUTPUT);
  pinMode(ledgelb, OUTPUT);
  pinMode(ledgruen, OUTPUT);
  pinMode(rot, OUTPUT);
  pinMode(gruen, OUTPUT);
  pinMode(blau, OUTPUT);
  pinMode(taste, INPUT);
}

void loop() {
  if(digitalRead(taste) == HIGH) {
    while(digitalRead(taste) == HIGH) {
      digitalWrite(LED_BUILTIN, HIGH);
    }
    digitalWrite(LED_BUILTIN, LOW);
    n++;
    if(n > 3) {
      n = 0;
    }
  }
  switch(n) {
    case 0:
      digitalWrite(ledrot, HIGH);
      delay(z1);
      digitalWrite(ledrot, LOW);
      digitalWrite(ledorange, HIGH);
      delay(z1);
      digitalWrite(ledorange, LOW);
      digitalWrite(ledgelb, HIGH);
      delay(z1);
      digitalWrite(ledgelb, LOW);
      digitalWrite(ledgruen, HIGH);
      delay(z1);
      digitalWrite(ledgruen, LOW);
      break;
    case 1:
      digitalWrite(ledrot, HIGH);
      digitalWrite(ledorange, HIGH);
      digitalWrite(ledgelb, HIGH);
      digitalWrite(ledgruen, HIGH);
      delay(z1);
      digitalWrite(ledrot, LOW);
      digitalWrite(ledorange, LOW);
      digitalWrite(ledgelb, LOW);
      digitalWrite(ledgruen, LOW);
      delay(z1);
      break;
    case 2:
      digitalWrite(rot, HIGH);
      delay(z1);
      digitalWrite(rot, LOW);
      digitalWrite(gruen, HIGH);
      delay(z1);
      digitalWrite(gruen, LOW);
      digitalWrite(blau, HIGH);
      delay(z1);
      digitalWrite(blau, LOW);
      break;
    case 3:
      digitalWrite(rot, HIGH);
      digitalWrite(gruen, HIGH);
      digitalWrite(blau, HIGH);
      delay(z2);
      digitalWrite(rot, LOW);
      digitalWrite(gruen, LOW);
      digitalWrite(blau, LOW);
      delay(z3);
      break;
  }
}
