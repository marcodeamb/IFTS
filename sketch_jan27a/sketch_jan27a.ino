void setup() {
  pinMode(13, OUTPUT); // configuro il pin 13 come output
}

void loop() {
  digitalWrite(13, HIGH); // "accendo" (alzo) il pin 13
  delay(2000); // aspetta 2 secondi
  digitalWrite(13, LOW); // "spengo" (abbasso) il pin 13
  delay(5000); // aspetta 5 secondi
}
