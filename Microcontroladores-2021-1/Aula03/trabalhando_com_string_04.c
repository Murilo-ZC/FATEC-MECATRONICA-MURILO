#include <stdio.h>
#include <string.h>
int main(void) {
  char msg[100];
  int altura;
  float temperatura;
  printf("Informe uma altura e uma temperatura:");
  scanf("%i%f", &altura, &temperatura);
  sprintf(msg, "Valor de altura: %i Valor de Temperatura: %.2f", altura, temperatura);
  printf("%s\n", msg) ;
  return 0;
}
