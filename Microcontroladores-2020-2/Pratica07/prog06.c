#include <stdio.h>
#include <string.h>
int main(void) {
  char msg[20];

  //Inicializa a msg como uma string vazia
  msg[0] = '\0';
  char dado;
  do{
    //Ler uma letra do teclado
    dado = getchar();
    printf("Digitado: %c\n", dado);
    //Tudo que for digitado que não for enter (\n) vai para dentro da variavel msg
    if (dado != '\n'){
      sprintf(msg, "%s%c", msg, dado);
    }
    printf("Valor de msg: %s\n", msg);

  }while(dado != 'q');
  printf("FIM DIGITACAO!\n");
  printf("%s\n", msg);
  return 0;
}
