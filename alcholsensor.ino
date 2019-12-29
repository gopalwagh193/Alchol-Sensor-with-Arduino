int redled=12;
int greenled=11;
int buzzer=10;
int smokeA0=A5

int sensorThreshold=400;

void setup() 
{
  pinMode(redled,OUTPUT);
  pinMode(greenled,OUTPUT);
  pinMode(buzzer,OUTPUT);
  pinMode(smokeA0,INPUT)
  Serial.begin(9600);
}

void loop() 
{
int analogSensor=analogRead(smokeA0);
Serial.print("PIN A0");
Serial.println(analogSensor);
if(analogSensor>sensorThreshold)
{
  digitalWrite(redled,HIGH);
  digitalWrite(greenled,LOW);
  tone(buzzer,1000,200);
}
else
{
  digitalWrite(redled,LOW);
  digitalWrite(greenled,HIGH);
  noTone(buzzer);
}
delay(100);
}
