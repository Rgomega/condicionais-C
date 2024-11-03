#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a , b, soma , subtracao ;
    int opcao;

    printf("Escolha dois numeros \n");
    scanf("%f %f", &a, &b);

    printf("Escolha !\n");
    printf("1 - Soma\n");
    printf("2 - Subtracao\n");
    scanf("%d", &opcao);

    switch(opcao){

    case 1:
         soma = a + b;
        printf("A soma eh %.2f", soma);
        break;
    case 2:
        if(a > b){
             subtracao = a - b;
            printf("A subtracao do primiro numero pelo segundo eh %.2f", &subtracao);
        }
        else{
             subtracao = b - a ;
            printf(" A subtracao do segundo numero pelo primeiro eh %.2f", subtracao);


        }

      break;


    }


return 0 ;


}
