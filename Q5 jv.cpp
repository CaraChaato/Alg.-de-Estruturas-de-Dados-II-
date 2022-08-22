
#include <stdio.h>

int vet[51];

//funcao para calcular fibonacci e restornar o valor ja calculado se ele estiver na memoria sem precisao de mais um calculo.
int fib(int n){
    if(n < 2){
        return n;
    }else if(vet[n] != -10){
        return vet[n];
    }else{
        
        vet[n] = fib(n-1) + fib(n-2);
        return vet[n];
    }
}


int main(){
    //!showMemory(start=65520)
    int n, res, k;

    //dar o valor -10 para todos os componentes do vetor, utilizando isso dentro da funcao fib para identificar se o fibonacci do numero ja foi calculado ou nao.
for (int i=0; i<51; i++){
    vet[i] = -10;
}
    
    //recebe quantas vezes vai ser calculado o fib
    printf("Digite o valor de N:");
    scanf("%d", &n);
    
    res = fib(n);
    printf("fib(%d) = %d \n" , n , res);
    return 0;
}


