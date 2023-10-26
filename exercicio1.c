#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(){
    int numeros[10];
    int numeroLido;
    int elementoMaior, valorMaior = INT_MIN;
    int elementoMenor, valorMenor = INT_MAX;

    for(int i = 0; i<10; i++){
        printf("Digite um numero: \n");
        scanf("%d",&numeroLido);

        numeros[i] = numeroLido;
    }

   /* elementoMaior = 0;
    elementoMenor = 0;
    valorMaior = numeros[0];
    valorMenor = numeros[0];*/

    for(int i = 0; i<10; i++){
        if(numeros[i] > valorMaior){
            elementoMaior = i;
            valorMaior = numeros[i];
        }
    }

    for(int i = 0; i<10; i++){
        if(numeros[i] < valorMenor){
            elementoMenor = i;
            valorMenor = numeros[i];
        }
    }

    printf("O maior elemento eh %d que contem o valor %d",elementoMaior,valorMaior);
    printf("\nO menor elemento eh %d que contem o valor %d",elementoMenor,valorMenor);
}