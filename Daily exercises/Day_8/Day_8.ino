//08blink

//Franzis Adventskalender für Arduino

int ledrot = 3;
int ledgelb = 6;
int ledgruen = 8;
int taste = 7;
int z = 200;
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
    r = !r;
  }
  if(r){
    digitalWrite(ledrot,HIGH);
    digitalWrite(ledgelb,LOW);
    digitalWrite(ledgruen,LOW);   
    delay(z);
    digitalWrite(ledrot,LOW); 
    delay(z);   
  }
  else {
    digitalWrite(ledrot,LOW);
    digitalWrite(ledgelb,HIGH);
    digitalWrite(ledgruen,HIGH);
    delay(z);       
  }
}
