#include <stdio.h>

int main(void) {
  char msg[20];

  int temperatura_calculada = 42;

  msg[0] = '4';
  msg[1] = '2';
  msg[2] = ' ';
  msg[3] = 'C';
  msg[4] = '\0';

  printf("%s\n", msg);
  return 0;
}
