#include<Servo.h>
int switch1 = 3;
int pos = 0;
Servo motor;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
motor.attach(switch1);
}

void loop() {
  Serial.println("what position do you want the servo to be connected");
  while(Serial.available() == 0 ){
  }
  pos = Serial.parseInt();
  Serial.println(pos);
  motor.write(pos);
  delay(200);

}
