/*
Programa para trabalhar com a comunicação serial
*/

const int LED_LIGADO = LOW;
const int LED_DESLIGADO = HIGH;
const int ENTRADA_ACIONADA = LOW;
const int ENTRADA_DESACIONADA = HIGH;
const int LED1 = D5;
const int LED2 = D6;
const int ENTRADA_01 = D1;
const int ENTRADA_02 = D2;

//Variáveis globais
char msg[10];

//Funções de interrupção - ISR
void ICACHE_RAM_ATTR muda_estado_led(){
  digitalWrite(LED2, !digitalRead(LED2));
}

void inicializa_hardware(){
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  digitalWrite(LED1, LED_DESLIGADO);
  digitalWrite(LED2, LED_DESLIGADO);
  pinMode(ENTRADA_01, INPUT_PULLUP);
  pinMode(ENTRADA_02, INPUT_PULLUP);
  
  //Configura a interrupção externa
  attachInterrupt(digitalPinToInterrupt(ENTRADA_01), muda_estado_led,FALLING);
  
  //Inicializar a comunicação
  //Serial.begin(115200); //9600, 19200, 38400, 115200
}

void setup() {
  inicializa_hardware();
  //Inicializa as variáveis globais
  msg[0] = '\0';
}

void processa_msg(){
  char led = msg[0];
  char estado = msg[1];
  //Processa info para o LED1
  if (led == '1'){
    if(estado == '1')
      digitalWrite(LED1, LED_LIGADO);
    else if (estado == '0')
      digitalWrite(LED1, LED_DESLIGADO);
  } else if(led == '2'){ //Processa info para o LED2
    if(estado == '1')
      digitalWrite(LED2, LED_LIGADO);
    else if (estado == '0')
      digitalWrite(LED2, LED_DESLIGADO);
  } else if(led == 'D'){
    delay(500);
  }
  //Devolve a mensagem recebida
  char resposta[20];
  sprintf(resposta, "RECEBI:%s;", msg);
  Serial.println(resposta);
  //Reseta a string de msg
  msg[0] = '\0';
}

void loop() {
  digitalWrite(LED1, LED_LIGADO);
  delay(1000);
  digitalWrite(LED1, LED_DESLIGADO);
  delay(1000);
}








