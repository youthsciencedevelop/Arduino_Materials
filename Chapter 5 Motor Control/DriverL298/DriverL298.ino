void setup() {
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);

}

void loop() {
  digitalWrite(13, 1);
  digitalWrite(12, 0);
  analogWrite(11, 255);
}
