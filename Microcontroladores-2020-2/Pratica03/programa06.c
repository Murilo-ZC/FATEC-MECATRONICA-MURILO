#include <stdio.h>

int main(void){
  int temperaturas[3];
  //Ler as 3 temperaturas
  int i;
  for(i = 0; i < 3; i++){
    printf("Informe a temperatura %i:", i);
    scanf("%i",&temperaturas[i]);
  }


  return 0;
}
