// Project 2 - Fast Christmas Light Sequence
// Group 02

const int leds[] = {2, 3, 4, 5, 6, 7}; // pins for the 6 LEDs
const int ledCount = sizeof(leds) / sizeof(leds[0]);

// Speed settings (in milliseconds)
unsigned int onDelay = 200;   // time each LED stays ON (ms)
unsigned int offDelay = 150;   // time after turning it OFF before next LED (ms)

void setup() {
  for (int i = 0; i < ledCount; i++) {
    pinMode(leds[i], OUTPUT); // configure each pin as an output
    digitalWrite(leds[i], LOW); // ensure LEDs start OFF
  }
}

void loop() {
  // cycle forward through each LED
  for (int i = 0; i < ledCount; i++) {
    digitalWrite(leds[i], HIGH); // turn LED ON
    delay(onDelay);              // wait while it's ON
    digitalWrite(leds[i], LOW);  // turn LED OFF
    delay(offDelay);             // short gap before next LED
  }
}
