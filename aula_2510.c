/*Funções
printf; scanf; 
rand (); gera numeros pseudos-aleatorios, quando utiliza variaveis globais = função n pura, preciso preparar o ambiente

srand(seed)   time(NULL); define uma semente para a Rand; Função pura, é mais facil de testar
Sempre procuremos criar funções puras, mais práticas

encapsular ou esconder

tipo do retorno, nome, parametros
int somar (int num1, int num2){
    tem que retornar algo
    int resultado = num1 + num2;



    return resultado;
}
*/
    #include <stdio.h>

int somar(int num1, int num2){
    int resultado = num1 + num2;
    return resultado;
}

float somarFloat(float num1, float num2){
    float resultado = num1 + num2;
    return resultado;
}

int main(){
    int resultadoDaSoma = somar(10,5);

    printf("O resultado da soma eh %d",resultadoDaSoma);

    float resultadoOutraSoma = somarFloat(2.5,7.5);

    printf("\nO resultado da outra soma eh %.2f",resultadoOutraSoma);
}
