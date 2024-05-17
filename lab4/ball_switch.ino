int sensorPin = 10;
int forwardLED = 12;
int reverseLED = 11;

void setup() {
  pinMode(sensorPin, INPUT);
  pinMode(forwardLED, OUTPUT);
  pinMode(reverseLED, OUTPUT);
}

void loop() {
  int read = digitalRead(sensorPin);

  if (read == HIGH) {
    digitalWrite(forwardLED, HIGH);
    digitalWrite(reverseLED, LOW);
  }

  if (read == LOW) {
    digitalWrite(reverseLED, HIGH);
    digitalWrite(forwardLED, LOW);
  }
}
