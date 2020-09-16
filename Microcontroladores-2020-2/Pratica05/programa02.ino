/*
  Programa criado para testar nosso hardware - 2020 - 2
*/

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


void setup() {
  pinMode(LED5, OUTPUT);
}

void loop() {
  digitalWrite(LED5, HIGH);
  delay(1000);
  digitalWrite(LED5, LOW);
  delay(1000);
}
