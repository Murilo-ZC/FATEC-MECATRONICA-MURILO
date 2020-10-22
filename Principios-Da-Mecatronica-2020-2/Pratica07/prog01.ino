const int ENTRADA_1 = 8;
const int ENTRADA_2 = 9;
const int LED_1 = 13;
const int LED_2 = 12;
const int LIGADO = HIGH;
const int DESLIGADO = LOW;
void setup() {
  //Configurar as entradas
  pinMode(ENTRADA_1, INPUT);
  pinMode(ENTRADA_2, INPUT);
  //Configurar as saídas
  pinMode(LED_1, OUTPUT);
  pinMode(LED_2, OUTPUT);
}

void loop() {
  //Lógica do problema
  if (digitalRead(ENTRADA_1) == LIGADO){
    digitalWrite(LED_1, LIGADO);
  }
  if (digitalRead(ENTRADA_2) == LIGADO){
    digitalWrite(LED_1, DESLIGADO);
  }
  if(digitalRead(ENTRADA_1) == LIGADO && digitalRead(ENTRADA_2) == LIGADO){
    digitalWrite(LED_2, LIGADO);
  } else {
    digitalWrite(LED_2, DESLIGADO);
  }
}
