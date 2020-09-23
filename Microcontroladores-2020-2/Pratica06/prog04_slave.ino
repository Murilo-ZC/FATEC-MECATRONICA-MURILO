void setup()
{
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  char dado = Serial.read();
  if (dado == 'a')
    digitalWrite(13, HIGH);
  else if(dado == 'b')
    digitalWrite(13, LOW);
}
