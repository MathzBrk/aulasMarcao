#include <stdio.h>
#include <stdlib.h>
/*Usuario digita 20 numeros salvar em vetor
imprima: 
maior
menor
media
soma
pares
imapres
desvio padrao*/
int main(){
    const int n = 20;
    int vetor[n];
    int maior = 0;
    int menor = 0;
    float soma = 0;

    for(int i = 0; i < n; i++){
    printf("Digite o numero da posicao %d: ",i);
    scanf("%d",&vetor[i]);

    soma += vetor[i];

    if(i == 0){
        maior = vetor[i];
    }   else{
        if(vetor[i] > maior){
            maior = vetor[i];
        }
    }

   if(i == 0){
        menor = vetor[i];
    }   else{
        if(vetor[i] < menor){
            menor = vetor[i];
        }
    }
    }

    for(int i = 0; i < n; i++){
    if(vetor[i] % 2 == 0){
        printf("\n numero par: %d",vetor[i]);
        printf("\n");
    } else{
        printf("\n numeros impar: %d",vetor[i]);
        printf("\n");
    }
    }

    /* if(vetor[i] % 2 == 0){
        printf("\nOs numeros pares sao: ",vetor[i]);
    } else{
        printf("\nOs numeros impares sao: ",vetor[i]);
    }*/



    float media = soma/n;
    printf("\n");
    printf("\nO maior eh: %d",maior);
    printf("\n");
    printf("\nO menor eh: %d",menor);
    printf("\n");
    printf("\nA soma eh: %.2f",soma);
    printf("\n");
    printf("\nA media eh: %.2f",media);
    printf("\n");


}