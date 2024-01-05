#include <Arduino.h>


const int GPIO_BUTTON_PIN = 0;
const int GPIO_RELAY = 16;
const int GPIO_LED = 23;

void setup() {
  Serial.begin(9600);
  // put your setup code here, to run once:
  pinMode(GPIO_BUTTON_PIN, INPUT);
  pinMode(GPIO_RELAY, OUTPUT);
  pinMode(GPIO_LED, OUTPUT);
}

void loop() {
  int buttonState = digitalRead(GPIO_BUTTON_PIN);

  if (buttonState == HIGH) { // HIGH represents logical true (1)
    digitalWrite(GPIO_LED, HIGH); // Turn on the LED
    digitalWrite(GPIO_RELAY, HIGH); // Relay off
  } else {
    digitalWrite(GPIO_LED, LOW); // Turn off the LED
    digitalWrite(GPIO_RELAY, LOW); // Relay off
  }
}