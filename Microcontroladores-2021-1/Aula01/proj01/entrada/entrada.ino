//Definições
#define D5_SAIDA_LED1 14
#define D6_SAIDA_LED2 12
#define D1_ENTRADA_BOT1 5
#define LIGAR_LED LOW
#define DESLIGAR_LED HIGH
#define TEMPO_DE_ESPERA 1000
#define BOTAO_ACIONADO LOW
#define BOTAO_LIBERADO HIGH

void setup() {
  pinMode(D5_SAIDA_LED1, OUTPUT);
  pinMode(D6_SAIDA_LED2, OUTPUT);
  digitalWrite(D5_SAIDA_LED1, DESLIGAR_LED);
  digitalWrite(D6_SAIDA_LED2, DESLIGAR_LED);
  pinMode(D1_ENTRADA_BOT1, INPUT_PULLUP);
}
void loop() {
  if(digitalRead(D1_ENTRADA_BOT1) == BOTAO_ACIONADO){
    digitalWrite(D5_SAIDA_LED1, LIGAR_LED);
  } else {
    digitalWrite(D5_SAIDA_LED1, DESLIGAR_LED);
  }
}
