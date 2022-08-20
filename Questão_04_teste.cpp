// Quest 04

#include <stdio.h>
#include <stdlib.h>

int funcaoBinomial(int n, int k);

int main(){
    int n, k;
    printf("insira dois inteiros: ");
    scanf("%d %d", &n, &k);
    printf("\nFuncao Binomial de %d e %d = %d\n\n", n, k, funcaoBinomial(n, k));
    return 0;
}

int funcaoBinomial(int n, int k){
    if((n == k) && (k == 0)){
        return 1;
    } else{
        // Coloquei um printf com n em k aqui para debugar e a funcao tá rodando infinitamente
        return(funcaoBinomial(n - 1, k - 1) + funcaoBinomial(n - 1, k));
    }
}