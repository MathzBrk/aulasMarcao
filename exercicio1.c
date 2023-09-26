#include <stdio.h>
#include <stdlib.h>

int main(){
    int numero;
    int indice;

    printf("\nDigite um numero: ");
    scanf("%d",&numero);

    if(numero % 2 == 1){
        for(indice = 0; indice <= numero; indice++){
        if(indice % 2 == 1){
            printf("os numeros impares sao: %d\n",indice);
        }
    }
    }
    else{
        for(indice = 0; indice <= numero; indice++){
            if(indice % 2 == 0){
                printf(" os numeros pares sao: %d\n",indice);
            }
        }
    }

}