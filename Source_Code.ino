#include<Servo.h>
Servo Myservo;
int pos;
int EMGPin = A1;int EMGVal = 0;
void setup() {
Myservo.attach(3);
Serial.begin(115200);
}
void loop() {
EMGVal = analogRead(EMGPin);
Serial.println(EMGVal);
delay(40);
if(EMGVal < 1000)
{
for(pos=0;pos<=180;pos++)
{
Myservo.write(pos);
delay(15);
}
delay(500);
}
else{
for(pos=180;pos>=0;pos--){
Myservo.write(pos);
delay(15);
}
delay(500);
}
}
