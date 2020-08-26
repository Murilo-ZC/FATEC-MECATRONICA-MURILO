#include <stdio.h>

int main(void) {
  float A,B,X,y;
  printf("Informe os valores de A,B e X:");
  // scanf("%f", &A);
  scanf("%f%f%f", &A, &B, &X);
  y = (A*X) + B;
  printf("Resultado da equacao: %.3f\n", y);
  return 0;
}
