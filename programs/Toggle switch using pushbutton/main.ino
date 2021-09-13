int switch1;
int readpin = 2;
int LED1=3;
int count=1;
void setup() {
  // put your setup code here, to run once:
pinMode(readpin , INPUT);
pinMode(LED1, OUTPUT);
Serial.begin(9600);
}

void loop() {
  switch1= digitalRead(readpin); 
  Serial.println(switch1);
  if(switch1 == 1)
    count ++;
  if(count%2 == 0)
    digitalWrite(LED1,HIGH);
  else
    digitalWrite(LED1,LOW);
  if(count>=99)
    count = 1;
    

}
