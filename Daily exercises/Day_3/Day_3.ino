//03blink

//Franzis Adventskalender für Arduino

int led1 = 3;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(led1,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED_BUILTIN,HIGH);
  digitalWrite(led1,LOW);
  delay(random(20,200));
  digitalWrite(LED_BUILTIN,LOW);
  digitalWrite(led1,HIGH);
  delay(random(20,200));
}
