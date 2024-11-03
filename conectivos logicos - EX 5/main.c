#include <stdio.h>
#include <stdlib.h>

int main()
{
  int a , b ;
  printf("Escolha dois numeros");
  scanf("%d %d", &a , &b);
  if((a + b > 0 && a + b < 10) || ((a + b  ) % 2 == 0)){

    printf(" A soma esta entre 0 e 10 ou eh par");
  }
  else{

    printf("A soma nao esta entre 0 e 10 e nao eh par");

  }


}
