#define FIRE_PIN 9

#define LED_PIN 13

void setup() {

  pinMode(FIRE_PIN, OUTPUT);

  pinMode(LED_PIN, OUTPUT);

}

void loop() {

  digitalWrite(LED_PIN, HIGH);

  delay(1000);

  digitalWrite(FIRE_PIN, HIGH);

  delay(100);

  digitalWrite(FIRE_PIN, LOW);

  digitalWrite(LED_PIN, LOW);

  delay(1000);

}

