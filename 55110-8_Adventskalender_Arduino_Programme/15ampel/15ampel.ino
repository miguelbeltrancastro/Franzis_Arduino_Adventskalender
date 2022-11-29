//15ampel
//Franzis Adventskalender für Arduino

int ledrot = 3;
int ledgelb = 6;
int ledgruen = 8;
int rot = 11;
int gruen = 10;
int taste = 7;
int z1 = 500;
int z2 = 2000;

void setup() {
  pinMode(ledrot, OUTPUT);
  pinMode(ledgelb, OUTPUT);
  pinMode(ledgruen, OUTPUT);
  pinMode(rot, OUTPUT);
  pinMode(gruen, OUTPUT);
  pinMode(taste, INPUT);
}

void loop() {
  digitalWrite(ledrot, LOW);
  digitalWrite(ledgelb, LOW);
  digitalWrite(ledgruen, HIGH);
  digitalWrite(rot, HIGH);
  digitalWrite(gruen, LOW);
  if(digitalRead(taste) == HIGH) {
    while(digitalRead(taste) == HIGH) {
      digitalWrite(LED_BUILTIN, HIGH);
    }
    digitalWrite(LED_BUILTIN, LOW);
    delay(z1);
    digitalWrite(ledgelb, HIGH);
    digitalWrite(ledgruen, LOW);
    delay(z1);
    digitalWrite(ledrot, HIGH);
    digitalWrite(ledgelb, LOW);
    delay(z1);
    digitalWrite(rot, LOW);
    digitalWrite(gruen, HIGH);
    delay(z2);
    digitalWrite(rot, HIGH);
    digitalWrite(gruen, LOW);
    delay(z1);
    digitalWrite(ledgelb, HIGH);
    delay(z1);
  }
}
