#define LED1 14
#define LED2 12
#define LED3 13
#define LED_LIGADO 0
#define LED_DESLIGADO 1
#define BOTAO1 5
#define BOTAO2 4
#define BOTAO_LIGADO 0
#define BOTAO_DESLIGADO 1

void inicializa_hardware(){
  //Configura as saídas
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  //Garante que as saídas estão desligadas
  digitalWrite(LED1, LED_DESLIGADO);
  digitalWrite(LED2, LED_DESLIGADO);
  digitalWrite(LED3, LED_DESLIGADO);
  //Configurar as entradas
  pinMode(BOTAO1, INPUT_PULLUP);
  pinMode(BOTAO2, INPUT_PULLUP);

  //Inicializa a comunicação Serial
  Serial.begin(9600); //9600, 19200, 38400 (bluetooth), 115200 (ethernet)
}

char msg[50];

void setup() {
  inicializa_hardware();
  Serial.println("Sistema Remoto:");
}

void loop() {
  //Verifica se alguma mensagem chegou
  if(Serial.available() > 0){
    //Le um caracter da porta serial
    char dado = (char) Serial.read();
    if(dado == 'L')
      digitalWrite(LED1, LED_LIGADO);
    else if (dado == 'D')
      digitalWrite(LED1, LED_DESLIGADO);
    else if(dado == 'E'){
      //Forma 1
      sprintf(msg,"Entrada: %d", digitalRead(BOTAO1)==BOTAO_LIGADO ? 1 : 0);
      //Forma 2
      //if(digitalRead(BOTAO1) == BOTAO_LIGADO)
      //  sprintf(msg,"Entrada: 1");
      //else
      //  sprintf(msg,"Entrada: 0");
        
      Serial.println(msg);
    }
    else
      Serial.println("Parametro desconhecido!");
  }
}
