#include <stdio.h>
#include <time.h>

int algoritmoDemorado(int n);

int main(){
    clock_t t1, soma = 0;
    int i;
    int x = 10;
    for (i = 0; i < x; i++){
        t1 = clock();
        algoritmoDemorado(100);
        t1 = clock() - t1;
        soma += t1;
        //printf("o tempo eh %f\n",(float)t1/CLOCKS_PER_SEC); // com esse printf, voce apresenta todos os valores!
    }
    printf("o tempo eh %f\n",(float)t1/CLOCKS_PER_SEC);
    //printf("%d\n",algoritmoDemorado(20));
    //printf("%d\n",algoritmoDemorado(30));
 
}

int algoritmoDemorado(int n){
    int i, j, k, l;
    int soma = 0;

    for(i = 0; i <n; i++){
        /*if(i % 100 == 0){
            printf("i = %d\n", i);
        }
        */
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