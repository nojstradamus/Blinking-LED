#define led_pin 8

void setup() {
  pinMode(led_pin, OUTPUT);
}

void loop() {
 
    digitalWrite(led_pin, HIGH);
    delay(100);
    digitalWrite(led_pin, LOW);
    delay(100);
}
