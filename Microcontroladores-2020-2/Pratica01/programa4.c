#include <stdio.h>

int main(void) {
  float numero_real;
  int numero_inteiro;
  char letra;

  printf("Informe um valor real:");
  scanf("%f", &numero_real);
  printf("Informe um valor inteiro:");
  scanf("%d", &numero_inteiro);
  printf("Informe uma letra:");
  scanf(" %c", &letra);

  printf("Batata: %f\n", numero_real);
  printf("Valor Inteiro: %i\n", numero_inteiro);
  printf("Letra digitada: %c\n", letra);
  printf("Palmeiras nao tem mundial!\n");

  return 0;
}
