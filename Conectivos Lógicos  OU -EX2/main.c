#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a , b ;
   printf("Escolha no 2 numeros inteiros");
   scanf("%d %d", &a , &b);
   if((a % 2) == 0 || (b % 2)  == 0){
    printf("um ou os dois numeros sao pares");

   }
   else{
    printf("Nenhum dos numeros eh par");
   }

}
