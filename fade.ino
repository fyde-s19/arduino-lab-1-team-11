int FV =0;
int X =1;
void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);

}



void dimmer(int freq, int duty) {
  int period, onTime, offTime;
  period = 1000 / freq;
  onTime = period * duty / 100;
  offTime = period - onTime;
  digitalWrite(LED_BUILTIN, HIGH);
  delay(onTime);
  digitalWrite(LED_BUILTIN, LOW);
  delay(offTime);

}
void loop() {
  FV = FV +X;
  dimmer(100, FV);
  if(FV >80){
    X=-1;
  }
  if(FV <1){
    X=1;
  }
}
