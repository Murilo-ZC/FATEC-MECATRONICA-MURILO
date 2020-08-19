#include <stdio.h>

int main(void) {
  int n1, n2, s;
  printf("Informe um numero:");
  scanf("%i", &n1);
  printf("Informe outro numero:");
  scanf("%i", &n2);
  s = n1 + n2;
  printf("Resultado: %i\n", s);
  return 0;
}
