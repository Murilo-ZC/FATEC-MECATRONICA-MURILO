void setup()
{
  //Configurar os pinos de saída
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  //Configurar os pinos de entrada
  pinMode(9, INPUT);
  pinMode(8, INPUT);
}

void loop()
{
  //Aciona a saída 10 quando a entrada 8 for acionada
  if (digitalRead(8) == HIGH){
  	digitalWrite(10, HIGH);
  } else {
  	digitalWrite(10, LOW);
  }
}
