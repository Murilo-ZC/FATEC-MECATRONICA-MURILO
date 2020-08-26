#include <stdio.h>

int main(void) {
  int operacao;
  float valor1, valor2, resultado;
  printf("Informe a operacao desejada:");
  scanf("%i", &operacao);

  if(operacao == 1){

    printf("SOMA!\n");
    printf("Informe 2 operandos:");
    scanf("%f%f", &valor1, &valor2);
    resultado = valor1 + valor2;
    printf("Resultado: %.3f\n", resultado);

  } else if(operacao == 2){
    printf("SUBTRACAO!\n");
  } else {
    printf("Operacao Invalida!\n");
  }
  return 0;
}

