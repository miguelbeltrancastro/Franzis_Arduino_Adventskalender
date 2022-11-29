//05blink
//Franzis Adventskalender für Arduino

int ledrot = 3;
int ledgelb = 6;

void setup() {
  pinMode(ledrot, OUTPUT);
  pinMode(ledgelb, OUTPUT);
}

void loop() {
  digitalWrite(ledrot, HIGH);
  digitalWrite(ledgelb, LOW);
  delay(random(20, 100));
  digitalWrite(ledrot, LOW);
  digitalWrite(ledgelb, HIGH);
  delay(random(50, 500));
}
