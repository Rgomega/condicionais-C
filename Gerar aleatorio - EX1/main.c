#include <stdio.h>
#include <stdlib.h>

int main()
{
    int soma;
  srand(time(NULL));

  int dado1 = ((rand() % (6)) + 1) ;
  int dado2 = ((rand() % (6)) + 1) ;
  int dado3 = ((rand() % (6)) + 1) ;
  soma = dado1 + dado2 + dado3;

  printf(" O lado gerado no dado 1 eh '%d' \n O do dado 2 eh '%d' \n O do dado tres eh '%d'\n ", dado1, dado2, dado3);
  printf( " A soma eh %d", soma);




}
