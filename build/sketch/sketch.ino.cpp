#include <Arduino.h>
#line 1 "c:\\Users\\Jeong\\Desktop\\Dev\\arduino\\sketch.ino"
#line 1 "c:\\Users\\Jeong\\Desktop\\Dev\\arduino\\sketch.ino"
void setup();
#line 6 "c:\\Users\\Jeong\\Desktop\\Dev\\arduino\\sketch.ino"
void loop();
#line 1 "c:\\Users\\Jeong\\Desktop\\Dev\\arduino\\sketch.ino"
void setup(){
  Serial.begin(9600);
  pinMode(3, OUTPUT);
}
int i = random(1, 101);
void loop(){
  do{
    digitalWrite(3, 1);
    Serial.print(i);
    Serial.println(" on");

    i = random(1,101);   
    delay(100); 
  }while(i<90);
  digitalWrite(3,0);
  Serial.print(i);
  Serial.println("off");
  i = random(1,101); 
  delay(100);
}
