int motor1=5,motor2=7;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(motor1,OUTPUT);
  pinMode(motor2,OUTPUT);
  

}
void forward();
void left();
void right();
void off();

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()>0)
  {
      char data=Serial.read();
      switch(data)
      { 
      case '1':forward(); break;
      case '2':left();break;
      case '3':right();break;
      case '4':off();break;
      default: break;
      }
      
              
  }
 delay(50);
}
void forward()
{
  digitalWrite(motor1,HIGH);
  digitalWrite(motor2,HIGH);
  
}
void left()
{
  digitalWrite(motor1,LOW);
  digitalWrite(motor2,HIGH);
}
void right()
{
  digitalWrite(motor1,HIGH);
  digitalWrite(motor2,LOW);
}
void off()
{
  digitalWrite(motor1,LOW);
  digitalWrite(motor2,LOW);
}
