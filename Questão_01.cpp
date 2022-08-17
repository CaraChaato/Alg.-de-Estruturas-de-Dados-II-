/**
 * Questão 01: Calcule o tempo (em segundos) necessário para rodar esse 
 * algoritmo
 */

#include <stdio.h>
#include <time.h>

int algoritmoDemorado(int n);

int main(){
    clock_t t1, soma = 0; // Criacao da Variavel do tipo clock, que armazena os clocks usados pelo processador para executar o algoritmo
    int i, x;
    printf("Insira o Valor de X: ");
    scanf("%d", &x);
    for (i = 0; i < x; i++){
        t1 = clock(); // Inicia o clock
        algoritmoDemorado(100); // Chamada da Funcao demorada
        t1 = clock() - t1; // Pausa o clock
        soma += t1;
    }
    printf("O tempo de execucao foi de %f Segundos\n",(float)t1/CLOCKS_PER_SEC); // Exibe a quantidade clocks usados na execucao do programa em segundos
}

int algoritmoDemorado(int n){
    int i, j, k, l;
    int soma = 0;
    for(i = 0; i <n; i++){
        for(j= 0; j< n; j++){
            for(k= 0; k < n; k++){
                for(l= 0; l< n; l++){
                    soma = i + j + k + l;
                }
            } 
        }
    }
  return soma;
}