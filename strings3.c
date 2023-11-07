#include <stdio.h>
#include <string.h>

int main(){
    char texto[100];

    printf("Digite um texto com no max 100 caracteres: ");
    gets(texto);

    printf("\nTexto digitado: %s",texto);

    for(int i = 0; i < 100; i++){
        if(texto[i] == '\0'){
            printf("\nO texto tem %d caracteres",i);
            break;
        }
    }
}