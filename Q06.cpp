#include <stdio.h>
#include <stdlib.h>

//função de troca/inverter
void trocar(int v[], int i, int f){
    int aux; //vetor auxiliar
    if (i < f){
        aux = v[i];
        v[i] = v[f];
        v[f] = aux;
        trocar (v, i + 1, f - 1);
    }

}

//função mostrar elementos
void imprimir (int v[], int tam){
    if (tam == 1)
        printf("%d, ", v[tam -1]);
    else {
        imprimir (v, tam -1);
        printf("%d, ", v[tam-1]);
    }

}

int main (){
    int n1,n2,n3,n4,n5,n6,n7,n8,n9,n10;
    printf("Digite 10 numeros:\n");
    scanf ("%d%d%d%d%d%d%d%d%d%d", &n1,&n2,&n3,&n4,&n5,&n6,&n7,&n8,&n9,&n10);
    int vet [10] = {n1, n2, n3, n4, n5, n6, n7, n8, n9, n10};

    printf("Vetor original\n");
    imprimir (vet, 10);
    printf("\n");
    trocar (vet, 0, 9);
    printf("Vetor trocado\n");
    imprimir (vet, 10);

    return 0;
}
