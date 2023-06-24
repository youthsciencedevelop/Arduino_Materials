void setup() {
  pinMode(13,OUTPUT);
  pinMode(8,INPUT);
  pinMode(9,INPUT);
  digitalWrite(13,1);
}

void loop() {
  if(digitalRead(8)==0)
  {
    digitalWrite(13,0);
  }
  if(digitalRead(9)==0)
  {
    digitalWrite(13,1);
  }

}
