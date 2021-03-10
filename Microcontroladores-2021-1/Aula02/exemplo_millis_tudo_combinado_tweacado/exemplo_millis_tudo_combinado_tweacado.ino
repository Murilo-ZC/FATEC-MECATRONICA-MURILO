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

long tempo1, tempo2, tempo_interrupcao;

ICACHE_RAM_ATTR void mudar_led_int(){
  if(millis() - tempo_interrupcao >= 200){
    tempo_interrupcao = millis();
    digitalWrite(LED3, !digitalRead(LED3));
  }
}

void inicializa_interrupcoes(){
  //Para definir uma interrupção
  attachInterrupt(digitalPinToInterrupt(BOTAO1), mudar_led_int, FALLING);

}

void setup() {
  inicializa_hardware();
  inicializa_interrupcoes();
  //Inicializar o tempo
  tempo1 = millis();
  tempo2 = millis();
  tempo_interrupcao = millis();
}

void loop() {
  if(millis() - tempo1 >= 500){
    //Atualizar minha hora anotada
    tempo1 = millis();
    //Ação desejada
    digitalWrite(LED2, !digitalRead(LED2));
  }
  if(millis() - tempo2 >= 200){
    //Atualizar minha hora anotada
    tempo2 = millis();
    //Ação desejada
    digitalWrite(LED1, !digitalRead(LED1));
  }
  
}
