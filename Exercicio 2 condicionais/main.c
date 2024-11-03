#include <stdio.h>
#include <stdlib.h>

int main()
{

    int nume1, nume2;
   printf("escreva 2 numeros inteiros");
   scanf("%d %d", &nume1, &nume2);
   if(nume1 > nume2){
    printf("O primeiro nuumero eh maior que o segundo");

   }
   else if(nume1 == nume2){
    printf("Os numeros sao os mesmos");
   }
   else{
    printf("O segundo numero eh maior que o primeiro");
   }




}
