#include <stdio.h>

int main(void) {
  //Apenas na declaração
  char msg[20] = "ola mundo";
  printf("Exibindo a mensagem toda de um so vez:%s lala\n", msg);
  //Acessando um caracter de cada vez
  int posicao;
  for (posicao = 0; posicao < 20 ; posicao++){
    printf("Caracter na posicao: %i eh: %c\n", posicao, msg[posicao]);
  }

  //Forca a string a terminar na posicao 6
  msg[6] = '\0';

  printf("Exibindo a mensagem toda de um so vez:%s lala\n", msg);
  //Acessando um caracter de cada vez
  for (posicao = 0; posicao < 20 ; posicao++){
    printf("Caracter na posicao: %i eh: %c\n", posicao, msg[posicao]);
  }
  return 0;
}
