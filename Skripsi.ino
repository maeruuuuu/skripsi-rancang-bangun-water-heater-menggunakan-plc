int val;
int tempPin = 1;

void setup()
{
Serial.begin(9600);
pinMode(4, OUTPUT);
}
void loop()
{
val = analogRead(tempPin);
float mv = ( val/1024.0)*5000;
float cel = mv/10;


Serial.print("TEMPRATURE = ");
Serial.print(cel);
Serial.print("*C");
Serial.println();

if (cel>40)
{
 digitalWrite(4,HIGH);
 delay(1000);
}
else 
{
  digitalWrite(4,LOW);
  delay(1000);
}
}
