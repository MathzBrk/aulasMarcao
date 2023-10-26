#include <stdio.h>
//Crie um soft q peça um numero inicial q o usuario digitar, uma razao e calcule os termos de uma PA.
int main(){
    int numero_inicial;
    int razao;
    int valores[10];

    printf("Digite o numero inicial: ");
    scanf("%d",&numero_inicial);

    printf("Digite a razao: ");
    scanf("%d",&razao);

    valores[0] = numero_inicial;
    
    for(int i = 1; i<10; i++){
        valores[i] = valores[i-1] + razao;
    }

    for(int i = 0; i<10; i++){
        printf("%d\t",valores[i]);
    }
}