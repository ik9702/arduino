// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
    Serial.begin(9600);
}

// the loop function runs over and over again forever
void loop() {
    int i = random(0,100);
    int j = random(0,100);
    Serial.print("i,j= ");
    Serial.print(i);
    Serial.print(" ");
    Serial.println(j);
    
}