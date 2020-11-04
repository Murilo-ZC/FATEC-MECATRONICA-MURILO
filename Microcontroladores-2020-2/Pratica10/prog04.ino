/*
Programa para trabalhar com a comunicação serial
*/

const int LED_LIGADO = LOW;
const int LED_DESLIGADO = HIGH;
const int ENTRADA_ACIONADA = LOW;
const int ENTRADA_DESACIONADA = HIGH;
const int LED1 = D5;
const int LED2 = D6;
const int LED3 = D7;
const int ENTRADA_01 = D1;
const int ENTRADA_02 = D2;
const int TEMPOS_DE_ESPERA[] = {2000, 1000, 500};

//Variáveis globais
char msg[30];
//Variável utilizada com o millis()
unsigned long tempoAnterior;
//Indica que a variável será utilizada dentro de uma interrupção
volatile int estado = 0;
//Variável utilizada para realizar debounce no botão
volatile unsigned long tempoBotao;

//Funções de interrupção - ISR
void ICACHE_RAM_ATTR conta_pulsos(){
  if(millis()-tempoBotao >= 200){
    estado++;
    tempoBotao = millis();
    if(estado > 3) estado = 0;
  }
}

void inicializa_hardware(){
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  digitalWrite(LED1, LED_DESLIGADO);
  digitalWrite(LED2, LED_DESLIGADO);
  digitalWrite(LED3, LED_DESLIGADO);
  pinMode(ENTRADA_01, INPUT_PULLUP);
  pinMode(ENTRADA_02, INPUT_PULLUP);
  
  //Configura a interrupção externa
  attachInterrupt(digitalPinToInterrupt(ENTRADA_01), conta_pulsos,RISING);
  
  //Inicializar a comunicação
  //Serial.begin(115200); //9600, 19200, 38400, 115200
}

void setup() {
  inicializa_hardware();
  //Inicializa as variáveis globais
  msg[0] = '\0';
  //Medindo o tempo atual
  tempoAnterior = millis();
  //Zera o testado do sistema
  estado = 0;
  //Guarda o tempo do acionamento do botão
  tempoBotao = millis();
}


void loop() {
  //Verifica se o tempo desejado ja passou
  if(estado == 0){
    digitalWrite(LED1, LED_DESLIGADO);
  }
  else{
    if(millis() - tempoAnterior >= TEMPOS_DE_ESPERA[estado-1]){
      //Guarda o novo intervalo de tempo
      tempoAnterior = millis();
      digitalWrite(LED1, !digitalRead(LED1));
    }
  }
  
}







