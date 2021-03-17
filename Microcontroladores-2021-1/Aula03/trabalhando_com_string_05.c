#include <stdio.h>
#include <string.h>
int main(void) {
  char msg[100] = "temperatura;26.5;altura;15";
  char atributo[20];
  int cAtributo, cMsg;
  int altura;
  float temperatura;
  printf("%s\n", msg);
  cAtributo = 0;
  cMsg = 0;
  //Pega o primeiro atributo da msg
  while(msg[cMsg] != ';'){
    atributo[cAtributo] = msg[cMsg];
    cAtributo++;
    cMsg++;
  }
  atributo[cAtributo] = '\0';
  //Pega o segundo atributo da msg
  cMsg++;//Avança mais uma posicao
  cAtributo = 0;
  while(msg[cMsg] != ';'){
    atributo[cAtributo] = msg[cMsg];
    cAtributo++;
    cMsg++;
  }
  atributo[cAtributo] = '\0';
  printf("Atributo: %s\n", atributo);
  return 0;
}
