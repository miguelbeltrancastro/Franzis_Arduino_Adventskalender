//13rgb

//Franzis Adventskalender für Arduino

int rot = 11;
int gruen = 10;
int blau = 9;

int taste = 7;
bool r = false;
long z = 500;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(rot,OUTPUT);
  pinMode(blau,OUTPUT);
  pinMode(gruen,OUTPUT);
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
    digitalWrite(rot, HIGH);
    delay(z);
    digitalWrite(gruen, HIGH);
    delay(z);
    digitalWrite(rot, LOW);
    delay(z);
    digitalWrite(blau, HIGH);
    delay(z);
    digitalWrite(gruen, LOW);
    delay(z);
    digitalWrite(rot, HIGH);
    delay(z);
    digitalWrite(blau, LOW);
  }
  else{
      digitalWrite(rot, LOW);
      digitalWrite(gruen, LOW);
      digitalWrite(blau, LOW);  
      delay(z);
  }
}
