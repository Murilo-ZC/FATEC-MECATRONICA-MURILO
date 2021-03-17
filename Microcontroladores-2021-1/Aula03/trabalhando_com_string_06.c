#include <stdio.h>
#include <string.h>
int main(void) {
  char msg[100] = "temperatura;26.5;altura;15";
  char atributo[20];
  int altura;
  float temperatura;
  //Devolve o endereço da string na posição desejada
  char* posicao = strchr(msg, ';');
  printf("encontrei: %li\n", posicao-msg);
  return 0;
}
