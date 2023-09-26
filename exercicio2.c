#include <stdio.h>
#include <stdlib.h>

int main(){
    int opcao;
    do{
    printf("\n1.Cadastrar");
    printf("\n2.Buscar");
    printf("\n3.Atualizar");
    printf("\n4.Exlcuir");
    printf("\n5.Sair");
     
    printf("\nEscolha uma opcao: ");
    scanf("%d",&opcao);
    if(opcao == 1 || opcao == 2 || opcao == 3 || opcao == 4 || opcao == 5){
    switch(opcao){
        case 1:
        printf("Voce escolheu a opcao cadastrar");
        break;

        case 2:
        printf("\nVoce escolheu a opcao Buscar");
        break;

        case 3:
        printf("\nVoce escolheu a opcao Atualizar");
        break;

        case 4:
        printf("\nVoce escolheu a opcao Excluir");
        break;

        case 5:
        printf("\nVoce escolheu a opcao Sair");
        break;
    }
    }else{
        printf("\nOpcao invalida, digite uma correta");
    }
    
    }while(opcao != 1 && opcao != 2 && opcao != 3 && opcao != 4 && opcao != 5);


}