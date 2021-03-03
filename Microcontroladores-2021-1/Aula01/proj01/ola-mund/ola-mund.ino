//Código embarcado == firmware == o "Windows" no NodeMCU
//É executada apenas uma vez, logo que o microcontrolador é iniciado
//Isso é um comentario de uma linha
void setup() {
  //Define o comportamento de um pino
  pinMode(14, OUTPUT);
  //Coloca nível alto no pino D5
  digitalWrite(14, HIGH);
  //Espera 2 segundos
  delay(2000);
  //COloca nível baixo no pino D5
  digitalWrite(14, LOW);
}
//Código que fica sendo executado enquanto o microcontrolador estiver ligado
void loop() {
  

}
