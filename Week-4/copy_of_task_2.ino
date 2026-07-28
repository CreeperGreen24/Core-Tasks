// Declare your pins
int redPin = 9;
int yellowPin = 10;
int greenPin = 11;

void setup() {
  // TASK 2.1a: Configure ALL THREE pins so they can send power OUT.
  pinMode(redPin,OUTPUT);
  pinMode(yellowPin,OUTPUT);
  pinMode(greenPin,OUTPUT);
  
}

void loop() {
  // TASK 2.1b: Create Pattern 1 - The "Traffic Light"
  // Hint: A traffic light doesn't turn all colors on at once. 
  // Pattern 1 = green -> wait -> yellow -> wait -> red -> wait -> green etc etc..
  // Write the commands to make this sequence happen continuously!
/*digitalWrite(greenPin, HIGH);
  delay(2000);
  digitalWrite(greenPin, LOW);

  digitalWrite(yellowPin, HIGH);
  delay(500);
  digitalWrite(yellowPin, LOW);

  digitalWrite(redPin, HIGH);
  delay(2000);
  digitalWrite(redPin, LOW);*/
  
  
  // ---------------------------------------------------------
  // TASK 2.2: Create Pattern 2 - The "Blinking Alert"
  // Once you finish Pattern 1, comment it out (put // in front of those lines)
  // Pattern 2 = try making all three LEDs blink ON and OFF at the exact same time.
  digitalWrite(redPin, HIGH);
  digitalWrite(yellowPin, HIGH);
  digitalWrite(greenPin, HIGH);
  delay(500);

  digitalWrite(redPin, LOW);
  digitalWrite(yellowPin, LOW);
  digitalWrite(greenPin, LOW);
  delay(500);
  
}