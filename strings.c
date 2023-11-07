#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char texto[101];
    //Caracter q delimita o final da string
    //'\0'

    //ultima posicao sera o caracter final
    texto[100] = '\0';


    //As "" significam q o texto é uma string constante
    //"Um texto qualquer"

    /*
    - strcpy(string1, string2); Copia string2 em string1
    - strcat(string1, string2); Insere o conteudo de string2 em string1


    -strlen(string1) = Retorna a quantidade de caracteres na string

    -strcmp(string1,string2) = se string1 < string2 retorna < 0; se string1 > string2 retorna > 0; se string1 == string2 retorna 0;
    if(!strcmp(string1, string2)){
    printf("Essas strings sao iguais");
    }

    string1 == string2
    string1 == "Marcos"
    string2 == "Marcos"

    strchr(string1,caracter) = Primeiro ocorrencia do caracter dentro da string
    strchr("Marcos Antonio",'A') = retorna a primeira ocorrencia q é 7

    strstr(string1,strina ocorrencg2) = Retorna a primeiria de string2 em string
    strstr("Marcos Antonio","Antonio") = 7

    
    */
}