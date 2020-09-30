#include <stdio.h>
#include <string.h>
int main(void) {
  char msg[20];

  int temperatura_calculada = 2345;

  sprintf( msg, "%i C", temperatura_calculada);

  printf("%s\n", msg);
  return 0;
}
