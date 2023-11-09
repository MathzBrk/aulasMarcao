#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int verificaPalindromo(char mensagem[]){
    char texto_invertido[100];
    texto_invertido[0] = '\0';
    int tamanhoDaString = strlen(mensagem);
    for(int i = tamanhoDaString; i >= 0 ;i--){
        texto_invertido[i] = mensagem[tamanhoDaString - 1 -i];
    }
    texto_invertido[tamanhoDaString] = '\0';
    printf("%s\n",mensagem);
    printf("%s\n",texto_invertido);
    if(strcmp(mensagem,texto_invertido) == 0){
        return 1;
    }else{
        return 0;
    }

}

int main(){
    char texto[100];
    int resultado;
    printf("Digite sua string: ");
    gets(texto);
    fflush(stdin);

    resultado = verificaPalindromo(texto);

    if(resultado == 1){
        printf("\nEh palindromo");
    }else{
        printf("\nNao eh palindromo");
    }

    printf("\n%s",texto);


}