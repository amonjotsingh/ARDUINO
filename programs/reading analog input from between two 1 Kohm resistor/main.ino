// C++ code
//
/*
  This program blinks pin 13 of the Arduino (the
  built-in LED)
*/
int readpin = A3;
int vol = 0;

void setup()
{
  pinMode(readpin,INPUT);
  Serial.begin(9600);  
}

void loop()
{
  vol = analogRead(readpin);
    Serial.println(vol);
    delay(500);
}
