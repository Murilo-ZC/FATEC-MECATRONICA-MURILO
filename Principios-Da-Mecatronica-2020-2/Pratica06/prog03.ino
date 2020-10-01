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
  //BOTAO_1 aciona o LED_VERMELHO e o BOTAO_2 desaciona ele
  if(digitalRead(BOTAO_1) == HIGH){
    
    digitalWrite(LED_VERMELHO, HIGH);
    
  } else if(digitalRead(BOTAO_2) == HIGH){
    
    digitalWrite(LED_VERMELHO, LOW);
  
    
  }
}
