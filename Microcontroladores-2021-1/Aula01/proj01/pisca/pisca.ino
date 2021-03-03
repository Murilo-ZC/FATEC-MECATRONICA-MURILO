//Definições
#define D5_SAIDA_LED1 14
#define D6_SAIDA_LED2 12
#define LIGAR_LED LOW
#define DESLIGAR_LED HIGH
#define TEMPO_DE_ESPERA 1000

void setup() {
  pinMode(D5_SAIDA_LED1, OUTPUT);
  pinMode(D6_SAIDA_LED2, OUTPUT);
}

void loop() {
  digitalWrite(D5_SAIDA_LED1, DESLIGAR_LED);
  digitalWrite(D6_SAIDA_LED2, LIGAR_LED);
  delay(TEMPO_DE_ESPERA);
  digitalWrite(D5_SAIDA_LED1, LIGAR_LED);
  digitalWrite(D6_SAIDA_LED2, DESLIGAR_LED); 
  delay(TEMPO_DE_ESPERA);
}
