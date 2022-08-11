// Inicio da Questao 2

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

float* gerador(size_t n){
    srand(time(NULL));
    float* res = malloc(n* sizeof (int));
    size_t i;
    for(i = 0; i < n; i++){
        res[i] = rand() % 1000;
    }

    return res;
}

int main (){

    //printf("Sequencia aleatoria\n");
    size_t n = 100;
    int media = 0, tot = 0;
    float *res = gerador(n);
    size_t i;
    for (i = 0; i < n; i++){
        //printf("res[%lu] = %f\n", i, res[i]);
        media = res[i] + media;
        tot++;
    }
    printf("Media = %d\n", media / tot);
}