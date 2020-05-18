#include "AK-030.h"
#include "Arduino.h"

void setup() {
  pinMode(PORT_LED_1, OUTPUT);  // Left Side Blue LED
  pinMode(PORT_LED_2, OUTPUT);  // Right Side Orange LED

  digitalWrite(PORT_LED_1, HIGH);  // turn off LED (negative logic)
  digitalWrite(PORT_LED_2, HIGH);  // turn off LED (negative logic)
}
void loop() {
  digitalWrite(PORT_LED_1, HIGH);  // off
  digitalWrite(PORT_LED_2, LOW);   // on
  delay(500);
  digitalWrite(PORT_LED_1, LOW);   // on
  digitalWrite(PORT_LED_2, HIGH);  // off
  delay(500);
}
