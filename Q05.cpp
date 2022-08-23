#include <stdio.h>
#include <stdlib.h>

// Variaveis auxiliares
int k = 0;
int cont = 0;

// Funcao que retorna um Fib
int fib(int n){
    if(n < 2){
        return n;
    }
    else{
        if(n == k){ // Se o inteiro k aparecer na busca de n o contador recebe um +1
            cont++; 
        }
        return fib(n-1) + fib(n-2);
    }
}

int main(){
    // Pede ao usuario qual fib sera calculado 
    int n;
    printf("Insira um Inteiro\n");
    scanf("%d", &n);
    printf("Que numero deseja pesquisar no Fib de %d?\n", n); // Pede ao usuario qual numero sera pesquisado na busca por fib(n)
    scanf("%d", &k);
    int res = fib(n);
    printf("\nfib(%d) = %d \n" , n , res); // O resultado e imprimido na tela
    printf("%d e encontrado %d vezes\n", k, cont); // O resultado da pesquisa e exibido
    return 0;
}