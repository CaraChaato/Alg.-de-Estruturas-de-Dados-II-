#include <stdio.h>
#include <stdlib.h>

void imprimirVetor(int v[], int n);
void fazeratroca(int v[], int i, int f);

int main(){
    int v[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printf("Vetor inicial: \n");
    imprimirVetor(v, 10);

    fazeratroca(v, 0, 9);
    printf("\n");

    printf("Vetor apos fazer a troca dos elementos: \n");

    imprimirVetor(v, 10);

    printf("\n");

}

void fazeratroca(int v[], int i, int f){
    int aux;
    if(i < f){
        aux = v[i];
        v[i] = v[f];
        v[f] = aux;

        fazeratroca(v, i+1, f-1);
    }
}

void imprimirVetor(int v[], int n){
    if(n == 1){
        printf("%d ", v[n - 1]);
    }
    else{
        imprimirVetor(v, n - 1);
        printf("%d ", v[n - 1]);
    }
}