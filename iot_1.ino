#define LED_PIN 16 // 16번 핀

void setup() {
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_PIN, HIGH);
  delay(1000);    // 딜레이 1초

  digitalWrite(LED_PIN, LOW);
  delay(1000);    // 딜레이 1초
}