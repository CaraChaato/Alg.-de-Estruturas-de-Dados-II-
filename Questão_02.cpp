/** 
 * Questão 02.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

float* gerador(size_t n); // Funcao que gera elementos aletorios e prenche um velor
void mediaIterativa(float res[], float &media, int &tot, size_t &i); // Funcao que realiza o calculo da media de forma iterativa
void mediaRecursiva(float res[], float &media, int &tot, size_t &i); // Funcao que realiza o calculo da media de forma recursiva

int main (){
    
    // Variaveis auxiliares e geracao do vetor com numeros aleatorios
    size_t n = 100; size_t i;
    float media = 0;
    int tot = 0;
    float *res = gerador(n);

    // For que imprime uma sequencia aleatoria enquanto realiza o calculo da media de forma iterativa
    printf("Sequencia aleatoria\n");
    for (i = 0; i < n; i++){
        if(i % 5 == 0){
            printf("\n");
        }
        printf("res[%lu] = %.f\t", i, res[i]);
        mediaIterativa(res, media, tot, i);
    }

    printf("\n\nMedia Iterativa = %.f\n", media / tot); // Exibe o resultado do calculo da media de forma iterativa
    
    media = 0; tot = 0; i = 0; // zera as variaveis auxiliares para reaproveitamento

    // Chamada da funcao que realiza o calculo de forma recursiva e impressao do resultado
    mediaRecursiva(res, media, tot, i);
    printf("\nMedia Recursiva = %.f\n", media / tot);   
}


float* gerador(size_t n){
    srand(time(NULL));
    float* res = (float*) malloc(n* sizeof (int));
    size_t i;
    for(i = 0; i < n; i++){
        res[i] = rand() % 1000; // gerador de numeros aleatorios ate 1000
    }
    return res;
}

void mediaIterativa(float res[], float &media, int &tot, size_t &i){ // Calculo da media de forma iterativa
    media = res[i] + media;
    tot++;
}

void mediaRecursiva(float res[], float &media, int &tot, size_t &i){ // Calculo da media de forma recursiva
    if(i < 100){
        media = res[i] + media;
        tot++;
        i++;
        mediaRecursiva(res, media, tot, i);
    }
}