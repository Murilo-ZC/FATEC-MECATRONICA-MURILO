#include <stdio.h>
#include <math.h>

float converterParaRadiano(float graus){
  float resposta;
  resposta = graus * M_PI / 180;
  return resposta;
}

int main(void){
  float angulo;
  printf("Informe o valor do angulo:");
  scanf("%f", &angulo);
  printf("O valor de %f em radianos eh %f\n", angulo, converterParaRadiano(angulo));
  return 0;
}
