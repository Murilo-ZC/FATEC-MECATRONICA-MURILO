/*
Programa para acionar sequencialmente, as saídas em D5 e D6.
*/

const int LED_LIGADO = LOW;
const int LED_DESLIGADO = HIGH;
const int LED1 = D5;
const int LED2 = D6;
void setup() {
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
}

void loop() {
  digitalWrite(LED1, LED_LIGADO);   
  delay(1000);
  digitalWrite(LED2, LED_LIGADO);
  delay(1000);
  digitalWrite(LED1, LED_DESLIGADO); 
  digitalWrite(LED2, LED_DESLIGADO);
  delay(1000);
}
