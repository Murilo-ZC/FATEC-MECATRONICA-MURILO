#include <stdio.h>

int main(void) {
  int operacao;
  float valor1, valor2, resultado;
  printf("Informe a operacao desejada:");
  scanf("%i", &operacao);

  switch(operacao){
    case 1:
      printf("SOMA\n");
      printf("Informe 2 operandos:");
      scanf("%f%f", &valor1, &valor2);
      resultado = valor1 + valor2;
      printf("Resultado: %.3f\n", resultado);
      break;
    case 2:
      printf("SUBTRACAO!\n");
      break;
    case 3:
      printf("Multiplicacao\n");
      break;
    case 5:
      printf("SEN\n");
      break;
    case 4:
      printf("DIVISAO\n");
      break;
    default:
      printf("Operacao Invalida!\n");
  }

  return 0;
}

