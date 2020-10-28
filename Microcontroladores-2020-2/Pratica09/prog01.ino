/*
Programa para trabalhar com a comunicação serial
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
  //Inicializar a comunicação
  Serial.begin(115200); //9600, 19200, 38400, 115200
}

void loop() {
  //Verifica se existe algo para receber na porta serial
  if(Serial.available()){
    char dado = Serial.read(); //Lendo 1 byte da porta serial
    if(dado == 'L'){
      digitalWrite(LED1, LED_LIGADO);
    } else if(dado == 'D'){
      digitalWrite(LED1, LED_DESLIGADO);
    }
  }
}
