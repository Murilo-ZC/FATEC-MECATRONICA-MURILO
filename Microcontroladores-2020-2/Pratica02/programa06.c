#include <stdio.h>

void realizarSoma(){
  float valor1, valor2, resultado;
  printf("SOMA\n");
  printf("Informe 2 operandos:");
  scanf("%f%f", &valor1, &valor2);
  resultado = valor1 + valor2;
  printf("Resultado: %.3f\n", resultado);
}

void realizarSubtracao(){
  float valor1, valor2, resultado;
  printf("SUBTRACAO\n");
  printf("Informe 2 operandos:");
  scanf("%f%f", &valor1, &valor2);
  resultado = valor1 - valor2;
  printf("Resultado: %.3f\n", resultado);
}

int main(void) {
  int operacao;
  int ligado = 1;
  while(ligado == 1){
    printf("Informe a operacao desejada:");
    scanf("%i", &operacao);

    switch(operacao){
      case 1: realizarSoma(); break;
      case 2: realizarSubtracao(); break;
      case 3:
        printf("Multiplicacao\n");
        break;
      case 5:
        printf("SEN\n");
        break;
      case 4:
        printf("DIVISAO\n");
        break;
      case 0:
        ligado = 0;
        break;
      default:
        printf("Operacao Invalida!\n");
        break;
    }
  }

  return 0;
}
