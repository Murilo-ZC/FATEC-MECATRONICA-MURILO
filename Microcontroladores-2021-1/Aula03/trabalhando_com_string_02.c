#include <stdio.h>

int main(void) {
  char msg[20] = "Hello World\n";
  //Caracter que finaliza a string
  msg[5] = '\0';
  printf("%s\n", msg);
  printf("Conteudo da String:\n");
  for(int i = 0; i < 20; i++)
    printf("[%i]:%c\n", i, msg[i]);
  return 0;
}
