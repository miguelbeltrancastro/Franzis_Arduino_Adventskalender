//03blink
//Franzis Adventskalender für Arduino

int led1 = 3;

void setup() { 
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(led1, OUTPUT);
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);
  digitalWrite(led1, LOW);
  delay(200);
  digitalWrite(LED_BUILTIN, LOW);
  digitalWrite(led1, HIGH);
  delay(200);
}
