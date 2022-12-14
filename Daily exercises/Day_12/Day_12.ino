//12licht

//Franzis Adventskalender für Arduino

int ledrot = 3;
int ledorange = 4;
int ledgelb = 6;
int ledgruend = 8;
int taste = 7;
int blink = 100;
int licht = 1000;
long z = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(ledrot,OUTPUT);
  pinMode(ledorange,OUTPUT);
  pinMode(ledgelb,OUTPUT);
  pinMode(taste,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(ledrot, HIGH);
  digitalWrite(ledgelb,LOW);
  digitalWrite(ledgruend,LOW);
  delay(blink);
  digitalWrite(ledrot, LOW);
  digitalWrite(ledgelb,HIGH);
  digitalWrite(ledgruend,LOW);
  delay(blink);
  digitalWrite(ledrot, LOW);
  digitalWrite(ledgelb,LOW);
  digitalWrite(ledgruend,HIGH);
  delay(blink);

  if (digitalRead(taste)==HIGH){
    while (digitalRead(taste)==HIGH){
      digitalWrite(LED_BUILTIN, HIGH);
    }
    digitalWrite(LED_BUILTIN, LOW);
    z = millis();
    digitalWrite(ledorange,HIGH); 
  }
  if (millis() > z + licht){
    digitalWrite(ledorange, LOW);
  }
}
