#include <stdio.h>

int main(){
    char nome[30];
    /*
    printf("Digite seu nome completo: \n");
    scanf("%s",&nome);
    fflush(stdin);

    printf("\nO nome digitado foi: %s",nome);
    */
    char nome2[30];
    printf("\nDigite seu nome completo: \n");
    gets(nome2);
    fflush(stdin);

    printf("\nO nome digitado foi: %s",nome2);
}