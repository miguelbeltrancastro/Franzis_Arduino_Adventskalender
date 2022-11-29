//09blink
//Franzis Adventskalender für Arduino

int ledrot = 3;
int ledgelb = 6;
int ledgruen = 8;
int taste = 7;
int z = 200;
bool r = false;

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(ledrot, OUTPUT);
  pinMode(ledgelb, OUTPUT);
  pinMode(ledgruen, OUTPUT);
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
    digitalWrite(ledrot, HIGH);
    digitalWrite(ledgelb, LOW);
    digitalWrite(ledgruen, LOW);
    delay(z);
    digitalWrite(ledrot, LOW);
    digitalWrite(ledgruen, HIGH);
    delay(z);
  }
  else {
    digitalWrite(ledrot, LOW);
    digitalWrite(ledgelb, HIGH);
    digitalWrite(ledgruen, LOW);
    delay(z);
  }
}
