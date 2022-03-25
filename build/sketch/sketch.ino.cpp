#include <Arduino.h>
#line 1 "c:\\Users\\Jeong\\Desktop\\Dev\\arduino\\sketch.ino"
// the setup function runs once when you press reset or power the board
#line 2 "c:\\Users\\Jeong\\Desktop\\Dev\\arduino\\sketch.ino"
void setup();
#line 9 "c:\\Users\\Jeong\\Desktop\\Dev\\arduino\\sketch.ino"
void loop();
#line 2 "c:\\Users\\Jeong\\Desktop\\Dev\\arduino\\sketch.ino"
void setup() {
<<<<<<< Updated upstream
  // initialize digital pin LED_BUILTIN as an output.
  Serial.begin(9600);

}

void loop(){
  int val;
  int sum = 0;
  for(int i=0; i<=10; i++){
    val = analogRead(A0);
    sum += val;  
    delay(10);
  }
  sum = sum/10;
  Serial.print("val: ");
  Serial.print(sum);
  Serial.print("   ");
  Serial.print("Voltage: ");
  Serial.println(sum*5/1023);
}


// // the loop function runs over and over again forever
// void loop() {
//     float sum = 0;
//     float Vsum = 0;
//     float Cal = 450;
//     float Val;
//     float Vol;

//     for(int i=0;i<=30;i++){
//       Val = analogRead(A0);
//       Vol = Cal*Val/1023;
//       sum += Val;
//       Vsum += Vol;
//       delay(300);
//     }
//     analogWrite(10, Vsum);
//     Serial.print(sum);
//     Serial.print("          ");

//     Serial.print(sum*5/1023);
//     Serial.println("V");
// }

// the loop function runs over and over again forever
// void loop() {
//     int Val = analogRead(A0);
//     float Cal = 204.8;
//     float Vol = Val/Cal;
//     analogWrite(10, Val/4);
//     Serial.print(Val);
//     Serial.print("          ");

//     Serial.print(Vol);
//     Serial.println("V");
=======
  Serial.begin(9600);
  pinMode(2, INPUT_PULLUP);
  pinMode(3, INPUT_PULLUP);
  pinMode(9, OUTPUT);
}


void loop() {
  for(int i=0; i<256; i++){
    analogWrite(9, i);
    delay(10);
  }
  for(int i=255; i>0; i--){
    analogWrite(9, i);
    delay(10);
  }
}

// // the setup function runs once when you press reset or power the board
// void setup() {
//   Serial.begin(9600);
//   pinMode(2, INPUT_PULLUP);
//   pinMode(3, INPUT_PULLUP);
//   pinMode(8, OUTPUT);
//   pinMode(9, OUTPUT);
//   pinMode(10, OUTPUT);
// }

// int i = 0;
// int j = 0;
// int k = 0;
// void loop() {
//     int val = random(1,31);
//     i = 0;
//     j = 0;
//     k = 0;
//     Serial.print(val);
//     if(0<val&&val<11){
//       i =1;
//     }
//     else if(11<=val&&val<21){
//       j =1;
//     }
//     else{
//       k = 1;
//     }
    
//     Serial.print(i);
//     Serial.print(j);
//     Serial.println(k);

//     digitalWrite(8, i);
//     digitalWrite(9, j);
//     digitalWrite(10, k);
//     delay(500);
// }








// // the setup function runs once when you press reset or power the board
// void setup() {
//   Serial.begin(9600);
//   pinMode(2, INPUT_PULLUP);
//   pinMode(3, INPUT_PULLUP);
//   pinMode(8, OUTPUT);
// }


// void loop() {
//     int i = digitalRead(2);
//     int j = digitalRead(3);
//     int y = i*j;
//     int x = i+j;
//     int val = x-(2*y);
//     Serial.println(val);
//     if(val == 0){
//       digitalWrite(8,1);
//     }
//     else{
//       digitalWrite(8, 0);
//     }
    
//     delay(200);
>>>>>>> Stashed changes
// }
