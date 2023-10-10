#include <stdlib.h>
#include <stdio.h>
 int main(){
    int opcao;
    float soma, num1, num2;
    FILE *farq;
    farq = fopen("manipu.txt","a");
    if (farq == NULL)   // <---- Testa se o arquivo foi aberto corretamente.
{
    printf("\nProblemas na CRIACAO do arquivo\n");
} else{
    printf("\nArquivo aberto com sucesso");
}
    do{
        printf("\nEscolha uma opcao: ");
        printf("\n1-Soma ");
        printf("\n2-Subtracao ");
        printf("\n3-Produto ");
        printf("\n4-Divisao ");
        printf("\n5-Log ");
        scanf("%d",&opcao);
        
        if(opcao==1 || opcao==2 || opcao==3 || opcao==4 || opcao==5){
            printf("\nDigite o primeiro numero: ");
            scanf("%f",&num1);
            printf("\nDigite o segundo numero: ");
            scanf("%f",&num2);
            switch(opcao){
            case 1:
            soma=num1 + num2;
            break;

            case 2:
            soma=num1 - num2;
            break;

            case 3:
            soma=num1 * num2;
            break;

            case 4:
            soma=num1 / num2;
            break;

            case 5:
            farq = fopen("manipu.txt","r");
            break;
            }
            printf("\nO resultado eh: %.2f",soma);
        }else{
            printf("\nopcao incorreta, digite outra.");
        }



    }while(opcao!=1 && opcao!=2 && opcao!=3 && opcao!=4 && opcao!=5);

    fprintf(farq,"\n%d. %f - %f = %f",opcao,num1,num2,soma);

    fclose(farq);
    return 0;
 }