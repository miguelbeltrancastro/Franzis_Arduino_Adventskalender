//07ampel

//Franzis Adventskalender für Arduino

int ledrot = 3;
int ledgelb = 6;
int ledgruen = 8;
int taste = 7;
int z1 = 500;
int z2 = 2000;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(ledrot,OUTPUT);
  pinMode(ledgelb,OUTPUT);
  pinMode(ledgruen,OUTPUT);
  pinMode(taste,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(taste)== HIGH) {
    digitalWrite(ledrot,HIGH);
    digitalWrite(ledgelb,LOW);
    digitalWrite(ledgruen,LOW);
    delay(z1);
    digitalWrite(ledgelb,HIGH);
    delay(z1);
    digitalWrite(ledrot,LOW);
    digitalWrite(ledgelb,LOW);
    digitalWrite(ledgruen,HIGH);
    delay(z2);
    digitalWrite(ledgelb,HIGH);
    digitalWrite(ledgruen,LOW);
    delay(z1);
    digitalWrite(ledrot,HIGH);
    digitalWrite(ledgelb,LOW);   
    delay(z2);
  }
}
