#include <stdio.h>
#include <math.h>

void realizarSoma(){
  float valor1, valor2, resultado;
  printf("ALL MIGHT\n");
  printf("Informe 2 operandos:");
  scanf("%f%f", &valor1, &valor2);
  resultado = valor1 + valor2;
  printf("Resultado: %.3f\n", resultado);
}

void realizarMultiplicacao(){
  float valor1, valor2, resultado;
  printf("Multiplicacao\n");
  printf("Informe 2 operandos:");
  scanf("%f%f", &valor1, &valor2);
  resultado = valor1 * valor2;
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

void menu(){
  printf("Nossa Calculadora!\n");
  printf("1 - Soma\n");
  printf("2 - Subtracao\n");
  printf("3 - Multiplicacao\n");
  printf("4 - Divisao\n");
  printf("5 - Seno\n");
  printf("6 - Cosseno\n");
  printf("0 - Sair\n");
  printf("Sua Escolha:");
}

void realizarSeno(){
  float angulo, seno_angulo;
  printf("Informe um angulo:");
  scanf("%f", &angulo);
  angulo = angulo * M_PI/180;
  seno_angulo = sin(angulo);
  printf("Valor do seno: %f\n", seno_angulo);

}

void realizarDivisao(){
  float numero1, numero2, resultado;
  printf("Informe dois numeros:");
  scanf("%f%f", &numero1, &numero2);
  if(numero2 != 0){
    resultado = numero1/numero2;
    printf("Resultado: %.3f\n", resultado);
  } else printf("Tentativa de divisão por zero!\n");
}

void realizarCosseno(){
  float angulo, seno_angulo;
  printf("Informe um angulo:");
  scanf("%f", &angulo);
  angulo = angulo * M_PI/180;
  seno_angulo = cos(angulo);
  printf("Valor do cosseno: %f\n", seno_angulo);
}
