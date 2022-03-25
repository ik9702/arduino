#include <Arduino.h>
#line 1 "c:\\Users\\Jeong\\Desktop\\Dev\\arduino\\sketch.ino"
#line 1 "c:\\Users\\Jeong\\Desktop\\Dev\\arduino\\sketch.ino"
void setup();
#line 11 "c:\\Users\\Jeong\\Desktop\\Dev\\arduino\\sketch.ino"
void loop();
#line 1 "c:\\Users\\Jeong\\Desktop\\Dev\\arduino\\sketch.ino"
void setup(){
  Serial.begin(9600);
  pinMode(3, OUTPUT);
}
int val = 0;
int cnt = 10;
int bright = 100;
float target = 1400;
int step = 5;

void loop(){
  Serial.print(target);
  Serial.print("         ");
  int sum = 0;
  for(int i=0;i<=cnt;i++){
    val = analogRead(A0);
    sum = sum+val;
    delay(10);
  }
  val = sum/cnt;
  
  float vol = 5*val/1023.0;
  float ohm = 10000*vol/(5-vol);
  Serial.print(ohm);
  

  if(bright>=0&&bright<255&&ohm<target){
    bright = bright-step;
  }
  else if(bright<255&&ohm>target){
    bright = bright+step;
  }
  else if(bright<0){
    bright = bright+step;
  }
  else{
    bright = bright-step;
  }
  Serial.print("      ");
  Serial.println(bright);
  analogWrite(3, bright);
}

// void setup(){
//   Serial.begin(9600);
//   pinMode(3, OUTPUT);
// }
// int val = 0;
// int cnt = 50;
// void loop(){
//   int sum = 0;
//   for(int i=0;i<=cnt;i++){
//     val = analogRead(A0);
//     sum = sum+val;
//     delay(10);
//   }
//   val = sum/cnt;
//   float vol = 5*val/1023.0;
//   float ohm = 10000*vol/(5-vol);
//   float cal = 1.6;
//   float hmm = pow(ohm, cal);
//   float lux = 1.5/hmm;
//   Serial.print(val);//0-1023
//   Serial.print("    ");
//   Serial.print(ohm);
//   Serial.print("    ");
//   Serial.println(lux);


// }
