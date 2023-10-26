#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
    int valores[10];
    int valorDigitado;
    int posicaoEncontrada = -1; //pratica comum em C
    srand(time(NULL));

   for(int i = 0; i < 10; i++){
    valores[i] = rand() % 100;
   }

   for(int i = 0; i < 10; i++){
    printf("%d\t",valores[i]);
   }

   printf("\nDigite um valor: ");
   scanf("%d",&valorDigitado);

   for(int i = 0; i < 10; i++){
    if(valores[i] == valorDigitado){
        posicaoEncontrada = i;
    }
   }
   
   
    if(posicaoEncontrada != -1){
        printf("\nO numero que vc digitou esta na %d posicao", posicaoEncontrada  + 1) ;
    }
}