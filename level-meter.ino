int sensorPin = A0;    // select the input pin for the potentiometer
int ledPinOne = 13; 
int ledPinTwo = 5; 
int ledPinThree = 6; // select the pin for the LED
int sensorValue = 0;  // variable to store the value coming from the sensor

void setup() {
  // declare the ledPin as an OUTPUT:
  pinMode(ledPinOne, OUTPUT);
  pinMode(ledPinTwo, OUTPUT);
  pinMode(ledPinThree, OUTPUT);
}

void loop() {
  // read the value from the sensor:
  sensorValue = analogRead(sensorPin);
  // turn LED 1 on at 1/4
  if (analogRead(sensorPin) >= 765) {
  digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
  delay(sensorValue);
  }
  else {
   digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
  }

  // turn LED 2 on at 2/4
  if (sensorValue >= 510) {
  digitalWrite(5, LOW);    // turn the LED off by making the voltage LOW
  delay(sensorValue);
  }
  else {
  digitalWrite(5, HIGH);   // turn the LED on (HIGH is the voltage level)

  }

  // turn LED 2 on at 3/4
  if (analogRead(sensorPin) >= 255) {
  digitalWrite(6, LOW);    // turn the LED off by making the voltage LOW
  delay(sensorValue);
  }
  else {
  digitalWrite(6, HIGH);   // turn the LED on (HIGH is the voltage level)
  }

}
