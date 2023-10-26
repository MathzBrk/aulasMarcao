#include <stdio.h>
#include <stdlib.h>

/*Void é a função que nao retorna nada*/

void somar(){
    int num1, num2;
    printf("Digite o primeiro numero: \n");
    scanf("%d",&num1);

    printf("Digite o segundo numero: \n");
    scanf("%d",&num2);

    printf("Resultado: %d", num1 + num2);
}

void subtrair(){
    int num1, num2;
    printf("Digite o primeiro numero: \n");
    scanf("%d",&num1);

    printf("Digite o segundo numero: \n");
    scanf("%d",&num2);

    printf("Resultado: %d", num1 - num2);
}




int main(){
    printf("Escolha uma opcao: ");
    printf("\n1-Somar e 2-Subtrair: ");

    int opcao;
    scanf("%d",&opcao);

    switch(opcao){
        case 1:
        somar();
        break;

        case 2:
        subtrair();
        break;
    }

    

}