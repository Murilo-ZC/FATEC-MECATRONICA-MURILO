void setup()
{
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop()
{
  //Isso é um comentário de uma linha
  //Aciona as saídas
  digitalWrite(12, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(10, HIGH);
  //Espera 0.5 segundo
  delay(500);
  //Desliga as saídas
  digitalWrite(12, LOW);
  digitalWrite(11, LOW);
  digitalWrite(10, LOW);
  //Espera 0.5 segundo
  delay(500);
}
