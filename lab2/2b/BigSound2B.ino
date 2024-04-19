const int soundPin = A0;
int sensorValue = 0;
int threshold = 100; // Adjust this value based on calibration

void setup() {
 Serial.begin(9600);
 pinMode(soundPin, INPUT); // Set sound pin as input
}

void loop() {
 sensorValue = analogRead(soundPin);

 // Print the sensor value regardless of threshold
 Serial.println(sensorValue);

 if (sensorValue > threshold) {
   // You can still include additional actions for sound detection
   // (e.g., turning on an LED or triggering other events)
   Serial.println("Sound Detected!");
 }

 delay(1000);
}
