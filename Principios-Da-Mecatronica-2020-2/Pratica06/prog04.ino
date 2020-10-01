//Informações globais sobre o programa
const int LED_VERDE = 10;
const int LED_AMARELO = 11;
const int LED_VERMELHO = 12;
const int BOTAO_1 = 8;
const int BOTAO_2 = 9;

void setup()
{
  //Configurar os pinos de saída
  pinMode(LED_VERMELHO, OUTPUT);
  pinMode(LED_AMARELO, OUTPUT);
  pinMode(LED_VERDE, OUTPUT);
  //Configurar os pinos de entrada
  pinMode(BOTAO_1, INPUT);
  pinMode(BOTAO_2, INPUT);
}

void loop()
{
  //Implementar o comportamento de semáforo: verde (4s), amarelo (2s) e vermelho (6)
  digitalWrite(LED_VERDE, HIGH);
  digitalWrite(LED_AMARELO, LOW);
  digitalWrite(LED_VERMELHO, LOW);
  delay(4000);
  digitalWrite(LED_VERDE, LOW);
  digitalWrite(LED_AMARELO, HIGH);
  digitalWrite(LED_VERMELHO, LOW);
  delay(2000);
  digitalWrite(LED_VERDE, LOW);
  digitalWrite(LED_AMARELO, LOW);
  digitalWrite(LED_VERMELHO, HIGH);
  delay(6000);
}
