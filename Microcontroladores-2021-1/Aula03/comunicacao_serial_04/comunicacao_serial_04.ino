//Roda uma vez só
void setup(){
    //Configura o que o pino faz
  pinMode(13, OUTPUT);
}
  
//Fica sendo executado enquanto o arduino estiver ligado 
//Roda depois do setup
void loop(){
  digitalWrite(13, HIGH);
    delay(1000);
    digitalWrite(13, LOW);
    delay(1000);
}
