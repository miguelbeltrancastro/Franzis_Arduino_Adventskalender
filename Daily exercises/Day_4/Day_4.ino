//04blink

//Franzis Adventskalender für Arduino

int ledrot = 3;
int ledgelb = 6;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(ledrot,OUTPUT);
  pinMode(ledgelb,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ledrot,HIGH);
  digitalWrite(ledgelb,LOW);
  delay(random(20,100));
  digitalWrite(ledrot,LOW);
  digitalWrite(ledgelb,HIGH);
  delay(random(50,500));
}
