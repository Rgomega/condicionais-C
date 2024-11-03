#include <stdio.h>
#include <stdlib.h>

int main()
{  int a1 ,a2, soma ;
    printf("Escolha 2 numeros inteiros para soma-los");
    scanf("%d %d", &a1 , &a2);
    soma = a1 + a2;
    if(soma >= 10){
        printf("A soma eh maior ou igual a 10");
    }
    else{
        printf("A soma eh menor que 10");
    }

    return 0;
}
