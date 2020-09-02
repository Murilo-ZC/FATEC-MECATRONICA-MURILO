#include <stdio.h>
#include "biblioteca.h"

int main(void) {
  int operacao;
  int ligado = 0;
  do{
    ligado = 1;
    menu();
    scanf("%i", &operacao);

    switch(operacao){
      case 1: realizarSoma(); break;
      case 2: realizarSubtracao(); break;
      case 3: realizarMultiplicacao(); break;
      case 5: realizarSeno(); break;
      case 4: realizarDivisao(); break;
      case 6: realizarCosseno(); break;
      case 0:
        ligado = 0;
        break;
      default:
        printf("Operacao Invalida!\n");
        break;
    }
  }while(ligado != 0);

  return 0;
}
