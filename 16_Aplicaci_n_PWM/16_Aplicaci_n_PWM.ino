int led = 13;
int brightness = 0;
int fadeAmount = 10;
void setup() {
  pinMode(led, OUTPUT);
}
void loop() {
  // set the brightness of pin 9:
  analogWrite(led, brightness);
  brightness = brightness + fadeAmount;
  if (brightness <= 0 || brightness >= 255) {
    fadeAmount = -fadeAmount;
  }
  // wait for 30 milliseconds to see the dimming effect
  delay(30);
}
