#include <stdio.h>

int main(void) {
  int numero, resto;
  printf("Informe um numero: ");
  scanf("%d", &numero);

  resto = numero % 2;

  if(resto == 0){
    printf("Número Par!\n");
  } else {
    printf("Número Ímpar!\n");
  }

  printf("Fim do Programa!\n");

  return 0;
}
