/*
  Programa criado para testar nosso hardware - 2020 - 2
*/

#include <math.h>

//Constantes do programa - mapa de I/O's
const byte SERVO = 5;
const byte MOTOR_DC = 3;
const byte POTENCIOMETRO = 0;
const byte LDR = 1;
const byte CHAVE_1 = 2;
const byte CHAVE_2 = 6;
const byte CHAVE_3 = 7;
const byte CHAVES[] = {CHAVE_1, CHAVE_2, CHAVE_3};
const byte LED1 = 12;
const byte LED2 = 11;
const byte LED3 = 10;
const byte LED4 = 9;
const byte LED5 = 8;
const byte LEDS[] = {LED1, LED2, LED3, LED4, LED5};
const byte LED_LIGADO = 0;
const byte LED_DESLIGADO = 1;
const byte CHAVE_ACIONADA = 0;
const byte CHAVE_DESACIONADA = 1;
const byte MOTOR_DC_LIGADO = 1;
const byte MOTOR_DC_DESLIGADO = 0;

//Função para inicializar o hardware
void inicializar_hardware(){
  pinMode(SERVO, OUTPUT);
  //pinMode(MOTOR_DC, OUTPUT);
  for(int i = 0; i < 5; i++){
    pinMode(LEDS[i], OUTPUT);
    digitalWrite(LEDS[i], LED_DESLIGADO);
  }
  for(int i = 0; i < 3; i++)
    pinMode(CHAVES[i], INPUT_PULLUP);
  //Apenas porque estamos utilizando um pullup externo
  pinMode(CHAVE_1, INPUT);
}

void realizarLeituraPotenciometro(){
  //Realiza a leitura
  int dado = analogRead(POTENCIOMETRO);
  //Imprime ele na porta
  Serial.println(dado);
}

void realizarLeituraPotenciometroVolts(){
  //Realiza a leitura
  float dado = analogRead(POTENCIOMETRO)*4.9e-3;
  //Imprime ele na porta
  Serial.println(dado);
}

void calculaExibeQuantidadeLux(){
  //Le o valor da tensão do Resistor
  float v_resistor = analogRead(LDR) * 4.9e-3;
  //Calcula a corrente do circuito
  float i_circuito = v_resistor / (10e3);
  //Calcula a resistencia do ldr
  float r_ldr = (5 - v_resistor) / i_circuito;
  //Determina o valor em lux
  float lux = (1.25e7) * (1/pow(r_ldr, 1.4059));
  //Exibe o valor em lux
  Serial.println(lux, DEC);
  
}



void setup() {
  inicializar_hardware();
  //Configurar a comunicação Serial
  Serial.begin(9600);
}

void loop() {
  if(digitalRead(CHAVE_1) == CHAVE_ACIONADA)
    Serial.print("a");
  if(digitalRead(CHAVE_2) == CHAVE_ACIONADA)
    Serial.print("b");
}
