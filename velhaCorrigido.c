#include <stdio.h>
#include <stdlib.h>
//Matheus Vilas Boas Borges
char tabuleiro[9];
int jogadas_1[9][2];
int jogadas_2[9][2];
int jogadasTotais_1 = 0;
int jogadasTotais_2 = 0;

void iniciarlinhas(){
    for(int i = 0; i < 9; i++){
        tabuleiro[i] = ' ';
    }

}

void imprimirJogo(char linhas[]){
    printf("\t0   1   2");
    printf("\n");
    printf("\n");
    printf("\t%c | %c | %c  0\n",linhas[0],linhas[1],linhas[2]);
    printf("\t---------\n");
    printf("\t%c | %c | %c  1\n",linhas[3],linhas[4],linhas[5]);
    printf("\t---------\n");
    printf("\t%c | %c | %c  2\n",linhas[6],linhas[7],linhas[8]);
}

int verificarVitoriaNaLinha(char tabuleiro[], char c){
    if(tabuleiro[0] == c && tabuleiro[1] == c && tabuleiro[2] == c ){
        return 1;
    }else{
    if(tabuleiro[3] == c && tabuleiro[4] == c && tabuleiro[5] == c ){
        return 1;
    }else{
        if(tabuleiro[6] == c && tabuleiro[7] == c && tabuleiro[8] == c){
            return 1;
        }else{
            return 0;
        }
    }
    }
}

int ganhou_por_Linhas(char c) {
    for (int i = 0; i < 3; i++) {
        if (verificarVitoriaNaLinha(tabuleiro + i * 3, c)) {
            return 1;
        }
    }
    return 0;
}

int verificaVitoriaNaColuna(char tabuleiro[], char c){
    if(tabuleiro[0] == c && tabuleiro[3] == c && tabuleiro[6] == c){
        return 1;
    }else{
        if(tabuleiro[1] == c && tabuleiro[4] == c && tabuleiro[7] == c){
            return 1;
        }else{
            if(tabuleiro[2] == c && tabuleiro[5] == c && tabuleiro[8] == c){
                return 1;
            }else{
                return 0;
            }
        }
    }
}

int ganhou_por_Colunas(char c) {
    for (int i = 0; i < 3; i++) {
        if (verificaVitoriaNaColuna(tabuleiro + i, c)) {
            return 1;
        }
    }
    return 0;
}


int ganhou_por_DigPrinc(char c){
    if(tabuleiro[0] == c && tabuleiro[4] == c && tabuleiro[8] == c){
        return 1;
    }else{
        return 0;
    }
}

int ganhou_por_DigSec(char c){
    if(tabuleiro[2] == c && tabuleiro[4] == c && tabuleiro[6] == c){
        return 1;
    }else{
        return 0;
    }
}

int validarPosicaoJogada(int posicao_jogada){
    if (posicao_jogada >= 0 && posicao_jogada < 9 && tabuleiro[posicao_jogada] == ' ') {
        return 1; 
    } else {
        return 0; 
    }
}

void LeituraCoordenadas(char j,int jogadas[][2]){
    int linha, coluna;
    int posicao_jogada;
    do {
        printf("Digite a coluna (0, 1, ou 2): ");
        scanf("%d", &coluna);

        printf("Digite a linha (0, 1, ou 2): ");
        scanf("%d", &linha);

        posicao_jogada = linha * 3 + coluna;

        if (validarPosicaoJogada(posicao_jogada) == 0) {
            printf("Posicao invalida. Tente novamente.\n");
        }

    } while (validarPosicaoJogada(posicao_jogada) == 0);
    tabuleiro[posicao_jogada] = j;
   
        if (j == 'X') {
        jogadas[jogadasTotais_1][0] = coluna;
        jogadas[jogadasTotais_1][1] = linha;
        
    } else {
        jogadas[jogadasTotais_2][0] = coluna;
        jogadas[jogadasTotais_2][1] = linha;
        
    }
    
}

int quantVazias(){
    int quantidade_posicoes_vazias = 0;
    for(int i = 0; i < 9; i++){
        if(tabuleiro[i] == ' '){
            quantidade_posicoes_vazias++;
        }
    }
    return quantidade_posicoes_vazias;
}

void jogar(){
    int jogador = 1, vitoriaX = 0, vitoria0 = 0;
    char jogador1 = 'X', jogador2 = '0';
    do{
        imprimirJogo(tabuleiro);
        if(jogador == 1){
            LeituraCoordenadas(jogador1,jogadas_1);
            jogadasTotais_1++;
            jogador ++;
            vitoriaX += ganhou_por_Linhas(jogador1);
            vitoriaX += ganhou_por_Colunas(jogador1);
            vitoriaX += ganhou_por_DigPrinc(jogador1);
            vitoriaX += ganhou_por_DigSec(jogador1);
        }else{
            LeituraCoordenadas(jogador2,jogadas_2);
            jogadasTotais_2++;
            jogador = 1;
            vitoria0 += ganhou_por_Linhas(jogador2);
            vitoria0 += ganhou_por_Colunas(jogador2);
            vitoria0 += ganhou_por_DigPrinc(jogador2);
            vitoria0 += ganhou_por_DigSec(jogador2);
        }
    }while(vitoriaX == 0 && vitoria0 == 0 && quantVazias() > 0);
    if(vitoria0 >= 1){
        imprimirJogo(tabuleiro);
        printf("\nVitoria do jogador 2!");
    }
    else{
        if(vitoriaX >= 1){
            imprimirJogo(tabuleiro);
            printf("\nVitoria do jogador 1!");
        } 
            else{
                if(quantVazias() == 0){
                imprimirJogo(tabuleiro);
                printf("\nO jogo deu velha! Empate!");
                }
            }
    }
    
}

int main(){
    int opcao;
    do{
        jogadasTotais_1 = 0;
        jogadasTotais_2 = 0;
        iniciarlinhas();
        jogar();

        for(int i = 0; i < jogadasTotais_1; i++){
            printf("\nJogada %d do jogador 1: (%d %d)", i + 1, jogadas_1[i][0], jogadas_1[i][1]);
        }
        
        printf("\n");

        for(int i = 0; i < jogadasTotais_2; i++){
            printf("\nJogada %d do jogador 2: (%d %d)", i + 1, jogadas_2[i][0], jogadas_2[i][1]);
        }

        printf("\nDigite 1 para jogar novamente: ");
        scanf("%d",&opcao);


    }while(opcao == 1);
    return 0;
}