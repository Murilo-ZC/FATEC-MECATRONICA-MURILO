const int ENTRADA_1 = 3;
const int LED_1 = 13;
const int LED_2 = 12;
const int LED_3 = 11;
const int LED_4 = 10;
const int LED_5 = 9;
const int LIGADO = HIGH;
const int DESLIGADO = LOW;

//Variável global
int quantidade_de_acionamentos = 0;

void setup() {
  //Configurar as entradas
  pinMode(ENTRADA_1, INPUT);
  //Configurar as saídas
  pinMode(LED_1, OUTPUT);
  pinMode(LED_2, OUTPUT);
  pinMode(LED_3, OUTPUT);
  pinMode(LED_4, OUTPUT);
  pinMode(LED_5, OUTPUT);
}

void loop() {
  //Lógica do problema
  if (digitalRead(ENTRADA_1) == LIGADO){
    quantidade_de_acionamentos = quantidade_de_acionamentos + 1;
    if (quantidade_de_acionamentos > 7){
      quantidade_de_acionamentos = 0;
    }
    delay(500);
  }
  
  if(quantidade_de_acionamentos == 0){
    digitalWrite(LED_1, DESLIGADO);
    digitalWrite(LED_2, DESLIGADO);
    digitalWrite(LED_3, DESLIGADO);
    digitalWrite(LED_4, DESLIGADO);
    digitalWrite(LED_5, DESLIGADO);
  } else if(quantidade_de_acionamentos == 1){
    digitalWrite(LED_1, DESLIGADO);
    digitalWrite(LED_2, LIGADO);
    digitalWrite(LED_3, DESLIGADO);
    digitalWrite(LED_4, LIGADO);
    digitalWrite(LED_5, DESLIGADO);
  } else if(quantidade_de_acionamentos == 2){
    digitalWrite(LED_1, LIGADO);
    digitalWrite(LED_2, DESLIGADO);
    digitalWrite(LED_3, LIGADO);
    digitalWrite(LED_4, DESLIGADO);
    digitalWrite(LED_5, LIGADO);
  } else if(quantidade_de_acionamentos == 3){
    digitalWrite(LED_1, DESLIGADO);
    digitalWrite(LED_2, DESLIGADO);
    digitalWrite(LED_3, DESLIGADO);
    digitalWrite(LED_4, DESLIGADO);
    digitalWrite(LED_5, LIGADO);
  } else if(quantidade_de_acionamentos == 4){
    digitalWrite(LED_1, DESLIGADO);
    digitalWrite(LED_2, DESLIGADO);
    digitalWrite(LED_3, DESLIGADO);
    digitalWrite(LED_4, LIGADO);
    digitalWrite(LED_5, LIGADO);
  } else if(quantidade_de_acionamentos == 5){
    digitalWrite(LED_1, DESLIGADO);
    digitalWrite(LED_2, DESLIGADO);
    digitalWrite(LED_3, LIGADO);
    digitalWrite(LED_4, LIGADO);
    digitalWrite(LED_5, LIGADO);
  } else if(quantidade_de_acionamentos == 6){
    digitalWrite(LED_1, DESLIGADO);
    digitalWrite(LED_2, LIGADO);
    digitalWrite(LED_3, LIGADO);
    digitalWrite(LED_4, LIGADO);
    digitalWrite(LED_5, LIGADO);
  } else if(quantidade_de_acionamentos == 7){
    digitalWrite(LED_1, LIGADO);
    digitalWrite(LED_2, LIGADO);
    digitalWrite(LED_3, LIGADO);
    digitalWrite(LED_4, LIGADO);
    digitalWrite(LED_5, LIGADO);
  }
 
}
