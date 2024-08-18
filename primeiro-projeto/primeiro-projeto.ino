int ledVermelho = 2;

void setup() {
  pinMode(ledVermelho, OUTPUT);
}

void loop() {
  digitalWrite(ledVermelho, HIGH);
  delay(1000);
  digitalWrite(ledVermelho, LOW);
  delay(500);
}