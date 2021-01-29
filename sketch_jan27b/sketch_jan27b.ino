void setup() {
  pinMode(13, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(7, OUTPUT);
}

void loop() {
  digitalWrite(13, HIGH); 
  delay(500);
  digitalWrite(11, HIGH); 
  delay(500);
  digitalWrite(9, HIGH); 
  delay(500);
  digitalWrite(7, HIGH); 
  delay(3000);
  digitalWrite(13, LOW);
  digitalWrite(11, LOW);
  digitalWrite(9, LOW);
  digitalWrite(7, LOW);
  delay(3000);
}
