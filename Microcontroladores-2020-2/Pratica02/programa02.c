#include <stdio.h>

int main(void) {
  float A,B,X;
  printf("Informe um valor para B e para A:");
  scanf("%f%f", &B, &A);
  X = -B/A;
  printf("Valor de X: %.2f\n", X);
  return 0;
}

