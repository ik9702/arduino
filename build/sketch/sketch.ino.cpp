#include <Arduino.h>
#line 1 "c:\\Users\\Jeong\\Desktop\\Dev\\arduino\\sketch.ino"

const int i = 0;
#line 3 "c:\\Users\\Jeong\\Desktop\\Dev\\arduino\\sketch.ino"
void setup();
#line 8 "c:\\Users\\Jeong\\Desktop\\Dev\\arduino\\sketch.ino"
void loop();
#line 3 "c:\\Users\\Jeong\\Desktop\\Dev\\arduino\\sketch.ino"
void setup(){
  Serial.begin(9600);

}

void loop(){
  for(i=0; i<10; i++){
    Serial.println(i);
  }
  Serial.end();
}




// void setup(){
//   Serial.begin(9600);
//   pinMode(3, OUTPUT);
//   pinMode(4, OUTPUT);
//   pinMode(5, OUTPUT);
//   pinMode(6, OUTPUT);

// }
// int num;
// int i=0;
// int bi[4];
// void loop(){

//   switch(i){
//     case 0:
//       bi[0] = 0;
//       bi[1] = 0;
//       bi[2] = 0;
//       bi[3] = 0;
//       break;
//     case 1:
//       bi[0] = 1;
//       bi[1] = 0;
//       bi[2] = 0;
//       bi[3] = 0;
//       break;
//     case 2:
//       bi[0] = 0;
//       bi[1] = 1;
//       bi[2] = 0;
//       bi[3] = 0;
//       break;
//     case 3:
//       bi[0] = 1;
//       bi[1] = 1;
//       bi[2] = 0;
//       bi[3] = 0;
//       break;
//   }
  
//   digitalWrite(3, bi[0]);
//   digitalWrite(4, bi[1]);
//   digitalWrite(5, bi[2]);
//   digitalWrite(6, bi[3]);
//   delay(500);
//   i++;
//   if(i>3){
//     i = 0;
//   }
  
    
// }
























