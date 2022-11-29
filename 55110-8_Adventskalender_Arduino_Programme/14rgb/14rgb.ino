//14rgb
//Franzis Adventskalender für Arduino

int rot = 11;
int gruen = 10;
int blau = 9;
int taste = 7;
int z = 5;
int i = 0;
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
    digitalWrite(blau, LOW);
    for(i=0; i <= 255; i++) {
      analogWrite(gruen, i);
      delay(z);
    }
    digitalWrite(gruen, HIGH);
    for(i=255; i >= 0; i--) {
      analogWrite(rot, i);
      delay(z);
    }
    digitalWrite(rot, LOW);
    for(i=0; i <= 255; i++) {
      analogWrite(blau, i);
      delay(z);
    }
    digitalWrite(blau, HIGH);
    for(i=255; i >= 0; i--) {
      analogWrite(gruen, i);
      delay(z);
    }
    digitalWrite(gruen, LOW);
    for(i=0; i <= 255; i++) {
      analogWrite(rot, i);
      delay(z);
    }
    digitalWrite(rot, HIGH);
    for(i=255; i >= 0; i--) {
      analogWrite(blau, i);
      delay(z);
    }
  }
  else {
    digitalWrite(rot, LOW);
    digitalWrite(gruen, LOW);
    digitalWrite(blau, LOW);
    delay(z);
  }
}
