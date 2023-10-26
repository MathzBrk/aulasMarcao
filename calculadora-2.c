#include <stdio.h>
#include <stdlib.h>



int somar(int num1, int num2){



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
    //multiplicacao
    //divisao
    //potencia
    //raiz quadrada
    //fatorial

    int opcao;
    scanf("%d",&opcao);

    switch(opcao){
        case 1:
        int num1, num2;
        printf("Digite o primeiro numero: \n");
        scanf("%d",&num1);

        printf("Digite o segundo numero: \n");
        scanf("%d",&num2);

        int resultado = somar(num1,num2);

        printf("\nResultado: %d",resultado);
        break;

        case 2:
        subtrair();
        break;
    }

    

}