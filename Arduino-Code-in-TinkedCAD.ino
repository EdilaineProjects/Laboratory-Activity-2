int ledPins[] = {12, 11, 10, 9, 8}; 
int numLeds = 5;                   

void setup() {
  int i = 0;
  while (i < numLeds) {
    pinMode(ledPins[i], OUTPUT);
    i++; 
  }
}

void loop() {
  LedON();
  LedOFF(); 
}

void LedON() {
  int i = 0;
  while (i < numLeds) {
    int brightness = map(i, 0, numLeds - 1, 150, 255); 
    analogWrite(ledPins[i], brightness); 
    delay(1000); 
    i++; 
  }
}

void LedOFF() {
  int i = 0;
  while (i < numLeds) {
    analogWrite(ledPins[i], 0); 
    delay(1000);
    i++; 
  }
}
