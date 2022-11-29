//13rgb
//Franzis Adventskalender für Arduino

int rot = 11;
int gruen = 10;
int blau = 9;
int taste = 7;
int z = 500;
bool r = false;

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(rot, OUTPUT);
  pinMode(gruen, OUTPUT);
  pinMode(blau, OUTPUT);
  pinMode(taste, INPUT);
}

void loop() {
  if(digitalRead(taste) == HIGH) {
    while(digitalRead(taste) == HIGH) {
      digitalWrite(LED_BUILTIN, HIGH);
    }
    digitalWrite(LED_BUILTIN, LOW);
    r = !r; 
  }
  if(r) {
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
  else {
    digitalWrite(rot, LOW);
    digitalWrite(gruen, LOW);
    digitalWrite(blau, LOW);
    delay(z);
  }
}
