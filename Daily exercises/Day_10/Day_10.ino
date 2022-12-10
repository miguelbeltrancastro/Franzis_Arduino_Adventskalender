//10blink

//Franzis Adventskalender für Arduino

int ledrot = 3;
int ledgelb = 6;
int ledgruen = 8;
int taste = 7;
int z1 = 200;
int z = z1;
bool r = false;

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
  if (digitalRead(taste)==HIGH){
    while (digitalRead(taste)==HIGH){
      digitalWrite(LED_BUILTIN, HIGH);
    }
    digitalWrite(LED_BUILTIN, LOW);
    z = z/2;
    if (z < z1/4){
      z = z1;
    }
  }
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
