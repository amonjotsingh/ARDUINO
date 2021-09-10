// C++ code
//
/*
  This program blinks pin 13 of the Arduino (the
  built-in LED)
*/
int bright = 255;
int bright1 = 50;
int  LED1 = 3;
int  LED2 = 5;

void setup()
{

  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  }

void loop()
{
  // turn the LED on (HIGH is the voltage level)
  analogWrite(LED1,bright) ;
  analogWrite(LED2,bright1);

}
