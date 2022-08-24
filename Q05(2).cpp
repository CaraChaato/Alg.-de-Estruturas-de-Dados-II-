
#include <stdio.h>

//variaveis auxiliares
int vet[51];
int cont = 0;
int k=0;

//funcao fibonacci q vai calcular e armazenar os valores
int fib(int n){
    
    if(n < 2){
        printf("%d \n", n);
        return n;
    }else if(vet[n] != -10){
        printf("%d \n", vet[n]);
        if(n == k){ // Se o inteiro k aparecer na busca de n o contador recebe um +1
            cont++; 
        }
        return vet[n];
    }else{
        if(n == k){ // Se o inteiro k aparecer na busca de n o contador recebe um +1
            cont++; 
        }
        vet[n] = fib(n-1) + fib(n-2);
        printf("%d \n", vet[n]);
        return vet[n];
    }
}


int main(){
    //!showMemory(start=65520)
    int n, res;

//preenche o vetor com -10 para que se possa saber em qual "casa" já se foi calculado o fib
for (int i=0; i<51; i++){
    vet[i] = -10;
}
    printf("Digite o valor de N:");
    scanf("%d", &n);
    printf("Digite o valor de k:");
    scanf("%d", &k);
    
    //recebe o resultado atraves da funcao
    res = fib(n);
    //saida
    printf("fib(%d) = %d \n" , n , res);
    printf("%d foi encontrado %d vezes\n", k, cont); // O resultado da pesquisa e exibido
    return 0;
}
