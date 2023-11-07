#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main(){
    char nome[100];
    printf("Digite seu nome completo: ");
    gets(nome);
    fflush(stdin);
    printf("\nO nome eh: %s",nome);

    for(int i = 0; i < 100; i++){
        if(nome[i] == ' '){
            nome[i] = '\0';
            break;
        }
    }
    printf("\nO nome eh: %s",nome);
}