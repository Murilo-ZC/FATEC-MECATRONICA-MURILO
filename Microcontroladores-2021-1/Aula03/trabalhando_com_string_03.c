#include <stdio.h>
#include <string.h>
int main(void) {
  char msg[20] = "Hello World\n";
  //Caracter que finaliza a string
  msg[5] = '\0';
  printf("%s\n", msg);
  printf("Conteudo da String:\n");
  for(int i = 0; i < 20; i++)
    printf("[%i]:%c\n", i, msg[i]);
  //Não podemos fazer atribuições diretas para vetores
  // msg = "Oi eu sou o Goku!"; //Não funciona em C
  sprintf(msg, "Oi eu sou o Goku!\n"); //Serve para escrever dentro da string
  printf("%s", msg);
  int tamanho_da_string = strlen(msg);
  printf("Tamanho da String: %i\n", tamanho_da_string);
  return 0;
}
