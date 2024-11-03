#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a , b;

   printf("Escolha 2 numeros em Z\n");
   scanf("%d %d", &a , &b);

   if (a > 10 || b > 10){

    printf("os dois ou um dos numeros eh maior que 10");
   }
   else{
    printf("Os numeros nao sao maiores que 10");
   }



}
