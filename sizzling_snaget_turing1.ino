// Define the pins for the LEDs
int ledPins[] = {12, 11, 10, 9, 8}; // LED pins
int numLeds = 5;                    // Number of LEDs

void setup() {
  // Set each pin as an OUTPUT
  int i = 0;
  while (i < numLeds) {
    pinMode(ledPins[i], OUTPUT); // Set the pin mode for the LED
    i++; // Increment the loop counter
  }
}

void loop() {
  LedON();
  LedOFF(); 
}

void LedON() {
  int i = 0;
  while (i < numLeds) {
    int brightness = map(i, 0, numLeds - 1, 150, 255); // Map the index to a brightness value between 50 and 255
    analogWrite(ledPins[i], brightness); // Set LED brightness
    delay(1000); // 1 second delay
    i++; // Increment the loop counter
  }
}

void LedOFF() {
  int i = 0;
  while (i < numLeds) {
    analogWrite(ledPins[i], 0); // Turn LED off
    delay(1000); // 1 second delay
    i++; // Increment the loop counter
  }
}