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

//Variáveis globais
char msg[30];
unsigned long tempoAnterior;
//Indica que a variável será utilizada dentro de uma interrupção
volatile unsigned long total_de_pulsos = 0;

//Funções de interrupção - ISR
void ICACHE_RAM_ATTR conta_pulsos(){
  total_de_pulsos++;
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
  attachInterrupt(digitalPinToInterrupt(ENTRADA_01), conta_pulsos,FALLING);
  
  //Inicializar a comunicação
  Serial.begin(115200); //9600, 19200, 38400, 115200
}

void setup() {
  inicializa_hardware();
  //Inicializa as variáveis globais
  msg[0] = '\0';
  //Medindo o tempo atual
  tempoAnterior = millis();
  //Zera o total de pulsos
  total_de_pulsos = 0;
}


void loop() {
  //Verifica se o tempo desejado ja passou
  if(millis() - tempoAnterior >= 1000){
    //Guarda o novo intervalo de tempo
    tempoAnterior = millis();
    //Mostra o total de pulsos na porta serial
    sprintf(msg, "Total de Pulsos: %i\n", total_de_pulsos);
    Serial.print(msg);
    //Reinicia a contagem de pulsos
    total_de_pulsos = 0;
  }
  
}







