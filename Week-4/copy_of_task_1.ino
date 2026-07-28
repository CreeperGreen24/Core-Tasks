// Week 4 - Task 1 Template

int mainLedPin = 9;

void setup() {
  // TASK 1.1: Configure the mainLedPin so it can send power OUT to the bulb.
  // Hint: You need to set the "mode" of the pin.
  pinMode(mainLedPin,OUTPUT);
  
}

void loop() {
  // TASK 1.2: Write the command to keep the bulb ON permanently.
  // Hint: You are "writing" a "digital" signal that is "HIGH".
  digitalWrite(mainLedPin,HIGH);
  
  // TASK 1.3: Once it is on, try making it blink! 
  // You will need to turn it OFF, but you also need a way to pause the program 
  // between the ON and OFF commands. 
  // Search online: "How to pause an Arduino program for a specific time?"
  delay(1000);
  digitalWrite(mainLedPin,LOW);
  delay(1000);
}