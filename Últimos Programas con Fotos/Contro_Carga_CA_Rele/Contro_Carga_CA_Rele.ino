int relayPin = 7;  // Pin conectado al relé
void setup() {
  pinMode(relayPin, OUTPUT);
  digitalWrite(relayPin, LOW);  // Inicialmente, el relé está apagado
}
void loop() {
  digitalWrite(relayPin, HIGH);  // Enciende el relé
  delay(2000);                   // Espera 2 segundos
  digitalWrite(relayPin, LOW);   // Apaga el relé
  delay(2000);                   // Espera 2 segundos
}