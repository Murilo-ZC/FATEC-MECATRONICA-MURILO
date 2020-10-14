/*
Programa para acionar sequencialmente, as saídas em D5 e D6.
*/

const int LED_LIGADO = LOW;
const int LED_DESLIGADO = HIGH;
const int ENTRADA_ACIONADA = LOW;
const int ENTRADA_DESACIONADA = HIGH;
const int LED1 = D5;
const int LED2 = D6;
const int ENTRADA_01 = D1;
const int ENTRADA_02 = D2;
void setup() {
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(ENTRADA_01, INPUT_PULLUP);
  pinMode(ENTRADA_02, INPUT_PULLUP);
}

void loop() {
  if(digitalRead(ENTRADA_01) == ENTRADA_ACIONADA){
    digitalWrite(LED1, LED_LIGADO);
  } else {
    digitalWrite(LED1, LED_DESLIGADO);
  }

  if(digitalRead(ENTRADA_02) == ENTRADA_ACIONADA){
    digitalWrite(LED2, LED_LIGADO);
  } else {
    digitalWrite(LED2, LED_DESLIGADO);
  }
}
