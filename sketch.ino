void setup(){
  Serial.begin(9600);
  pinMode(3, INPUT);
  pinMode(4, OUTPUT);
}
int flag = 1;
void loop(){
  int state = digitalRead(3);
  Serial.println(state);
  switch(state){
    case 0:
      digitalWrite(4, 0);
      delay(200);
      flag = 1;
      break;
    case 1:
      if(flag==1){
        digitalWrite(4, 1);
        delay(500);
        digitalWrite(4, 0);
        delay(500);
        digitalWrite(4, 1);
        delay(500);
        digitalWrite(4, 0);
        delay(500);
        digitalWrite(4, 1);
        delay(500);
        digitalWrite(4, 0);
        delay(500);
        flag = 0;
      }
        
      digitalWrite(4, 1);
      
      break;
    
  }
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























