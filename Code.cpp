// Define the LED pins
int red_light = 2;
int yellow_light = 6;
int white_light = 4;

void setup() {
  // Initialize the LED pins as outputs
  pinMode(red_light, OUTPUT);
  pinMode(yellow_light, OUTPUT);
  pinMode(white_light, OUTPUT);
}

void loop() {
  // Turn on the red light and wait for 500 milliseconds
  digitalWrite(red_light, HIGH);
  delay(500);
  // Turn off the red light
  digitalWrite(red_light, LOW);
  
  // Turn on the yellow light and wait for 500 milliseconds
  digitalWrite(yellow_light, HIGH);
  delay(500);
  // Turn off the yellow light
  digitalWrite(yellow_light, LOW);
  
  // Turn on the white light and wait for 500 milliseconds
  digitalWrite(white_light, HIGH);
  delay(500);
  // Turn off the white light
  digitalWrite(white_light, LOW);
}
