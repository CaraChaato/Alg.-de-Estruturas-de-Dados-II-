#include <stdio.h>

int fib(){
    int n[10],i=0,j,cont;
    
    for (j = 0;j <= 10 ; j++)//zera os valores no vetor para não dar numero lixo
        n[j] = 0;
    
    for (i=0; i <= 10; i++){//laço para fazer o calculo de fibonacci
        if(n[i] == 0 && i==0){
            n[i] = 0;
        } else if(n[i]==0 && i == 1){
            n[i] = 1;
        }else{
            n[i] = n[i-2]+n[i-1];
        }
        printf("%d ",n[i]);//imprime a sequencia
    }
    return 0;
}


int main(){
    //!showMemory(start=6562)
    fib();//chama a função fib
}
