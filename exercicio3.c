#include <stdio.h>
#include <stdlib.h>

int main(){
    int opcao, numero1, numero2;
    printf("\n1.Multiplicacao");
    printf("\n2.Divisao");
    printf("\nEscolha uma opcao: ");
    scanf("%d",&opcao);

    while(opcao < 1 || opcao > 2){
        printf("\nDigite uma opcao valida");
        printf("\nEscolha uma opcao: ");
        scanf("%d",&opcao);
    }

    printf("\nDigite o numero 1: ");
    scanf("%d",&numero1);

    printf("\nDigite o numero 2: ");
    scanf("%d",&numero2);

    if(opcao == 1){
        printf("\nO resutaldo eh: %d",(numero1 * numero2));
    }else{
        if(numero2 == 0){
            printf("\nNao eh possivel fazer divisao por zero");
        }
    }


}