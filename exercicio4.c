#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    int numeros1[10];
    int numeros2[10];
    int numerosIguais = 0;
    srand(time(NULL));

    for(int i = 0; i < 10; i++){
        numeros1[i] = rand() % 100;
    }

    for(int i = 0; i < 10; i++){
        numeros2[i] = rand() % 100;
    }

    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            if(numeros1[i] == numeros2[j]){
                numerosIguais++;
            }
        }
    }// algoritmo n^2

    for(int i = 0; i < 10; i++){
        printf("%d\t",numeros1[i]);
    }

    printf("\n");

    for(int i = 0; i < 10; i++){
        printf("%d\t",numeros2[i]);
    }

    printf("\nHa %d numeros iguais",numerosIguais);




}