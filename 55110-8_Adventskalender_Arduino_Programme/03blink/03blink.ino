//03blink
//Franzis Adventskalender für Arduino

int led1 = 3;

void setup() {
  pinMode(led1, OUTPUT);
}

void loop() {
  digitalWrite(led1, HIGH);
  delay(random(20, 200));
  digitalWrite(led1, LOW);
  delay(random(20, 200));
}
