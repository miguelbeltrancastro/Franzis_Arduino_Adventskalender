//02blink
//Franzis Adventskalender für Arduino

int red_led = 3;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(red_led,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED_BUILTIN,HIGH);
  digitalWrite(red_led,LOW);
  delay(200);
  digitalWrite(LED_BUILTIN,LOW);
  digitalWrite(red_led,HIGH);
  delay(200);
}
