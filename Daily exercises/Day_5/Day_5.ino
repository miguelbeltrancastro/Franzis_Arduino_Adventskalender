//05blink

//Franzis Adventskalender für Arduino

int ledrot = 3;
int ledgelb = 6;
int ledgruen = 8;
int z = 200;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(ledrot,OUTPUT);
  pinMode(ledgelb,OUTPUT);
  pinMode(ledgruen,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ledrot,HIGH);
  digitalWrite(ledgelb,LOW);
  digitalWrite(ledgruen,LOW);
  delay(z);
  digitalWrite(ledrot,LOW);
  digitalWrite(ledgelb,HIGH);
  digitalWrite(ledgruen,LOW);
  delay(z);
  digitalWrite(ledrot,LOW);
  digitalWrite(ledgelb,LOW);
  digitalWrite(ledgruen,HIGH);
  delay(z);
}
