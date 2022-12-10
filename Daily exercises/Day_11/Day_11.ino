//11pwm

//Franzis Adventskalender für Arduino

int ledrot = 3;
int ledgelb = 6;
int hell = 0;
int schritt = 5;
int taste = 7;
int z = 10;
bool r = false;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(ledrot,OUTPUT);
  pinMode(ledgelb,OUTPUT);
  pinMode(taste,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(taste)==HIGH){
    while (digitalRead(taste)==HIGH){
      digitalWrite(LED_BUILTIN, HIGH);
    }
    digitalWrite(LED_BUILTIN, LOW);
    r = !r;
  }
  if (r){
    analogWrite(ledrot, hell);
    analogWrite(ledgelb,hell);
    hell += schritt;
    if(hell == 0 || hell == 255){
      schritt = - schritt;
    }
    delay(z);
  }
  else{
    digitalWrite(ledrot,LOW);
    digitalWrite(ledgelb,LOW);   
  }
}
