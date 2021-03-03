//Definições
#define D5_SAIDA_LED1 14
#define LIGAR_LED LOW
#define DESLIGAR_LED HIGH
#define TEMPO_DE_ESPERA 1000

void setup() {
  pinMode(D5_SAIDA_LED1, OUTPUT);
  digitalWrite(D5_SAIDA_LED1, DESLIGAR_LED);
  delay(TEMPO_DE_ESPERA);
  digitalWrite(D5_SAIDA_LED1, LIGAR_LED);
}
//Código que fica sendo executado enquanto o microcontrolador estiver ligado
void loop() {
  

}
