// Week 4 - Task 3: The Hardwired Trap

int alertLed = 6;

void setup() {
  // SOFTWARE BUG 1: The Arduino doesn't know if alertLed is an INPUT or OUTPUT.
  // Add the missing setup command below!
  pinMode(alertLed,OUTPUT);
  
}

void loop() {
  // HARDWARE BUG: 
  // Hit "Start Simulation". The bulb explodes immediately! 
  // Look at the Arduino. The wire is plugged into 5V (constant power).
  // Fix the hardware:
  // 1. Move that wire to Digital Pin 6.
  // 2. Add the missing component so the bulb survives.

  // SOFTWARE BUG 2: This command has a capitalization error.
  digitalWrite(alertLed, HIGH);
  
  // SOFTWARE BUG 3: The line below is missing a crucial punctuation mark at the end.
  delay(1000);
  
  digitalWrite(alertLed, LOW);
  delay(1000);
}