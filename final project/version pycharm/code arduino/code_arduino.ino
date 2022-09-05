#include <Servo.h>
String myCMD;
Servo servo;
int green = 7;
int red = 9;
void setup() {
servo.attach(11);
Serial.begin(115200);
pinMode(red,OUTPUT);
pinMode(green,OUTPUT);
}
void loop() {
while (Serial.available()==0){
} 
myCMD=Serial.readStringUntil('\r');
  if (myCMD=="ON"){
  servo.write(180);
  digitalWrite(green,1);
  digitalWrite(red,0);
  }
  else if (myCMD=="OFF") {
  servo.write(0);
  digitalWrite(red,1);
  digitalWrite(green,0);
}
}
