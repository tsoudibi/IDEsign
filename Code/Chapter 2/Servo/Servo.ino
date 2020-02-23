#include <Servo.h>  //使arduino看懂有關servo的程式碼
Servo myservo;  //創造一個叫myservo的物件

void setup() {
  myservo.attach(9);  //讓9號腳位作為控制myservo的物件
}
void loop() {
  myservo.write(90);  //告訴myservo要轉到哪個角度                
  delay(15);  //以防馬達還沒轉好就開始執行下一程式碼                     
}
