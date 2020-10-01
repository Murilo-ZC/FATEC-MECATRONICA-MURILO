//Informações globais sobre o programa
const int LED_VERDE = 10;
const int LED_AMARELO = 11;
const int LED_VERMELHO = 12;
const int BOTAO_1 = 8;
const int BOTAO_2 = 9;

int estado_semaforo;

void setup()
{
  //Configurar os pinos de saída
  pinMode(LED_VERMELHO, OUTPUT);
  pinMode(LED_AMARELO, OUTPUT);
  pinMode(LED_VERDE, OUTPUT);
  //Configurar os pinos de entrada
  pinMode(BOTAO_1, INPUT);
  pinMode(BOTAO_2, INPUT);
  //Inicializa as variáveis
  estado_semaforo = 0;
}

void loop()
{
  //Implementar o comportamento de semáforo: verde (4s), amarelo (2s) e vermelho (6)
  if(estado_semaforo == 0){
    digitalWrite(LED_VERDE, HIGH);
    digitalWrite(LED_AMARELO, LOW);
    digitalWrite(LED_VERMELHO, LOW);
  } else if (estado_semaforo == 1){
    digitalWrite(LED_VERDE, LOW);
    digitalWrite(LED_AMARELO, HIGH);
    digitalWrite(LED_VERMELHO, LOW);
  } else if (estado_semaforo == 2) {
    digitalWrite(LED_VERDE, LOW);
    digitalWrite(LED_AMARELO, LOW);
    digitalWrite(LED_VERMELHO, HIGH);
  } else if(estado_semaforo == 3){
    digitalWrite(LED_VERDE, LOW);
    digitalWrite(LED_AMARELO, HIGH);
    digitalWrite(LED_VERMELHO, LOW);
  } else if(estado_semaforo == 4){
    digitalWrite(LED_VERDE, LOW);
    digitalWrite(LED_AMARELO, LOW);
    digitalWrite(LED_VERMELHO, LOW);
  }
  
  if(estado_semaforo == 0){
    delay(4000);
    estado_semaforo = 1;
  } else if(estado_semaforo == 1){
    delay(2000);
    estado_semaforo = 2;
  } else if(estado_semaforo == 2){
    delay(6000);
    estado_semaforo = 0;
  } else if(estado_semaforo == 3){
    delay(2000);
    estado_semaforo = 4;
  } else if(estado_semaforo == 4){
    delay(2000);
    estado_semaforo = 3;
  }

  if(digitalRead(BOTAO_1) == HIGH){
    estado_semaforo = 3;
  } else if(digitalRead(BOTAO_2) == HIGH){
    estado_semaforo = 2;
  }

}
