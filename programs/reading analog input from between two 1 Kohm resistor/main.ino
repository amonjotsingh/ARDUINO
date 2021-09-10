
int readpin = A3;
int vol = 0;
float V ;

void setup()
{
  pinMode(readpin,INPUT);
  Serial.begin(9600);  
}

void loop()
{
  vol = analogRead(readpin);
  V = (vol*5.)/1023.;
  Serial.println(V);
    delay(500);
}
