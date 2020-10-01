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
  //Aciona o LED_VERMELHO apenas quando os botoes 1 e 2 estiverem ligados
  if( (digitalRead(BOTAO_1) == HIGH) && (digitalRead(BOTAO_2) == HIGH) ){
    digitalWrite(LED_VERMELHO, HIGH);
  } else {
    digitalWrite(LED_VERMELHO, LOW);
  }
}
