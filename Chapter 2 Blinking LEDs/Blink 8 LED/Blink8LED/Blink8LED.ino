void setup() {
  pinMode(0,OUTPUT);
  pinMode(1,OUTPUT);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  
  digitalWrite(0, 1);
  digitalWrite(1, 1);
  digitalWrite(2, 1);
  digitalWrite(3, 1);
  digitalWrite(4, 1);
  digitalWrite(5, 1);
  digitalWrite(6, 1);
  digitalWrite(7, 1);
    

}

void loop() 
{
  for(int i = 0; i <= 7; i++)
  {
    digitalWrite(i, 0);
    delay(200);
    digitalWrite(i, 1);
  }
}
