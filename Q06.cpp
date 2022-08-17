#include <stdio.h>
#include <stdlib.h>


void imprimirVetor(int v[], int n); 
void fazeratroca(int v[], int i, int f);

int main(){
    int n;
    printf("Digite a quantidade de elementos do vetor: \n\n");
    scanf("%d", &n);

    int v[n]; 
    int i;

    for (i = 0; i < n; i++){
        printf("Digitar o %d elemento do vetor:\n", i);
        scanf("%d", &v[i]);
    }
    
    printf("Vetor inicial: \n\n");
    imprimirVetor(v, n); // chamada da funcao para imprimir o vetor, passado como parametro o vetor e seu tamanho.

    fazeratroca(v, 0, n-1); // funcao para fazer a troca dos elementos, passando como parametro, o vetor o elemento inicial e o elemento final
    printf("\n");

    printf("Vetor apos fazer a troca dos elementos: \n\n");

    imprimirVetor(v, n); // apresentando o vetor apos fazer a troca!

    printf("\n");

}

void fazeratroca(int v[], int i, int f){
    int aux; // variavel aux para ajudar na troca.
    if(i < f){
        aux = v[i];
        v[i] = v[f];
        v[f] = aux;

        fazeratroca(v, i+1, f-1); // chamada recursiva, ou seja, chamando a função dentro da função.
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
