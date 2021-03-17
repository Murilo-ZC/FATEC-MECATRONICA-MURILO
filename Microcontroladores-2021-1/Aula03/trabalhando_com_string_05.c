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
  while(msg[cMsg] != ';'){
    atributo[cAtributo] = msg[cMsg];
    cAtributo++;
    cMsg++;
  }
  printf("Atributo: %s\n", atributo);
  return 0;
}
