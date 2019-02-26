void setup() {
  // put your setup code here, to run once:
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

void timedBlink(int interval)
{
  digitalWrite(LED_BUILTIN, HIGH); // turn on LED with HIGH voltage
  delay(interval*1000); // wait for the interval
  digitalWrite(LED_BUILTIN, LOW); // turn on LED with LOW voltage
  delay(1000); // wait for a second
  
}

void loop() {
  // put your main code here, to run repeatedly:
  timedBlink(1);
  timedBlink(2);
  timedBlink(3);
  
}
