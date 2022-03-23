# 1 "c:\\Users\\Jeong\\Desktop\\Dev\\arduino\\sketch.ino"
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  Serial.begin(9600);

}

void loop(){
  int val;
  int sum = 0;
  for(int i=0; i<=10; i++){
    val = analogRead(A0);
    sum += val;
    delay(50);
  }
  sum = sum/10;
  Serial.print("val: ");
  Serial.print(sum);
  Serial.print("   ");
  Serial.print("Voltage: ");
  Serial.println(200*sum*5/1023);
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
// }
