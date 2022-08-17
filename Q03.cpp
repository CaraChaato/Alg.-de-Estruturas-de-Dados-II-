/**
 * Questão 01: Escreva um programa recursivo que recebe como entrada uma
 * string (char*) e determine recursivamente se essa entrada é um palíndromo
 * (ignore espaços, vírgulas e acentuação):
 * Exemplo 1:
 * Exp1: Ria, só tive sorte má, a metros evito sair.
 * Exp1 é um palíndromo 
 */

#include <stdio.h>
#include <string.h>

void palindromo(char palavra[], int n , int m, int &t){  // Funcao que testa a se a palavra e um palindromo
    if(m > 0){ // se m for menor que 0 a analise acaba
        if(palavra[n] == palavra[m]){ // se a primeira e a ultima letra forem iguais, a variavel t vai receber um acrescimo
            t++;
            n++;
            m--;
            palindromo(palavra, n, m, t);  // Recursao
        }
    }
}

int main(){
    char palavra[50]; // Variavel para armazenar a string
    printf("Insira uma string:\n");
    scanf("%s", &palavra);
    
    // Variavel contadora e variaveis que marcam o inicio e o fim da string
    int n, m, t;
    n = 0; t = 0; m = (strlen(palavra)) - 1; 

    palindromo(palavra, n, m, t); // Chamada da funcao palindromo

    // Se a variavel contadora tiver metade do tamanho da palavra, ela indica que e um palindromo
    if(t >= (strlen(palavra) / 2)){
        printf("Eh um Palindromo\n");
    }
    else{
        printf("N eh um Palindromo\n");
    }
    return 0;
}
