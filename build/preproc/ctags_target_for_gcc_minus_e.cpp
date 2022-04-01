# 1 "c:\\Users\\Jeong\\Desktop\\Dev\\arduino\\sketch.ino"
void setup(){
  Serial.begin(9600);

  for(int i=2; i<10; i++){
    pinMode(i, 0x1);
  }

}

int i = 0;
int pin[] = {0, 3, 4, 0, 5, 6, 7, 8 ,0, 9, 10};

void loop(){
  switch(i){
    case 0:
      int disp[8] = {7, 6, 4, 2, 1, 9, 0,0};
      break;

    case 1:
      int disp[8] = {7, 6, 4, 2, 1, 9, 0,0};
      break;

    case 2:
      int disp[8] = {7, 6, 4, 2, 1, 9, 0,0};
      break;
  }

  for(int j=2; j<10; j++){
    digitalWrite(j, 0);
  }
  for(int k=0; 8; k++){
    digitalWrite(pin[dis[k]], 1);
  }
  delay(100);
}
