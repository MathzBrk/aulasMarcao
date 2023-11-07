#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char texto1[100];
    char texto2[100];

    for(int i = 0; i < 100; i++){
        texto1[i] = '\0';
        texto2[i] = '\0';
    }

    printf("Digite um texto com no max 100 caracteres: ");
    gets(texto1);

    printf("\nTexto1: %s",texto1);
    printf("\n\nTexto2: %s",texto2);

    strcpy(texto2,texto1);

    printf("\n\nTexto2: %s",texto2);
}