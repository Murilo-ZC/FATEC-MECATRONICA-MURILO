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
}

long tempo;

void setup() {
  inicializa_hardware();
  //Inicializar o tempo
  tempo = millis();
}

void loop() {
  if(millis() - tempo >= 500){
    //Atualizar minha hora anotada
    tempo = millis();
    //Ação desejada
    digitalWrite(LED2, !digitalRead(LED2));
  }
  
}
