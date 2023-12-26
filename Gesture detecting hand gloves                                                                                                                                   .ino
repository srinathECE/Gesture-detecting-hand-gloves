const int flexPin=A0;
const int  ledPin=8;
const int  motPin=9;
void setup()
{
  Serial.begin(9600);
  pinMode(ledPin,OUTPUT);  
  pinMode(motPin,OUTPUT); 
}
void loop()
{
  int flexValue;
  flexValue=analogRead(flexPin);
  Serial.print("sensor: ");
  Serial.println(flexValue);
  if(flexValue>10)
  {
     digitalWrite(ledPin,HIGH);
   digitalWrite(motPin,LOW);
  }
  
  else
  {
     digitalWrite(ledPin,LOW);
     digitalWrite(motPin,HIGH);
  }
  delay(1000);
}