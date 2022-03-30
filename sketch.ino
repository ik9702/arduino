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