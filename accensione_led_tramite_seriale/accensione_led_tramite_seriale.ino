void setup() {
  Serial.begin(9600); //inizializza il monitor seriale

  Serial.println("Accende e spegne il led con la seriale");
  Serial.println("1 accende il led");
  Serial.println("0 spegne il led");
  Serial.println("2 fa lampeggiare il led");
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  if (Serial.available()) {  //se ci sono questi caratteri nel monitor seriale compie il comando
    unsigned char comando = Serial.read(); //legge il valore immesso nella seriale e lo assegna alla variabile "comando"
    if (comando == '1') {   //le due virgolette leggono UN carattere ascii
      digitalWrite(LED_BUILTIN, HIGH);
      Serial.println("acceso");
    } else if (comando == '0') {
      digitalWrite(LED_BUILTIN, LOW);
      Serial.println("spento");
    } else if (comando == '2') {
      Serial.println("inizio lampeggio");
      digitalWrite(LED_BUILTIN, HIGH);
      Serial.println("acceso");
      delay(750);
      digitalWrite(LED_BUILTIN, LOW);
      Serial.println("spento");
      delay(750);
      digitalWrite(LED_BUILTIN, HIGH);
      Serial.println("acceso");
      delay(750);
      digitalWrite(LED_BUILTIN, LOW);
      Serial.println("spento");
      delay(500);
      Serial.println("fine lampeggio");
    } else {
      Serial.println("comando non riconosciuto, inserire 1 o 0");
    }
  }
}
