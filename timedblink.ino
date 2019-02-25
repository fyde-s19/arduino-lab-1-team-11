
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}
void timedBlink (int interval){
  digitalWrite(LED_BUILTIN, HIGH);
  delay(interval*1000);
  digitalWrite(LED_BUILTIN,LOW);
  delay(1000);
}


// the loop function runs over and over again forever
void loop() {
  timedBlink (1);
  timedBlink (2);
  timedBlink (3);
  
}
