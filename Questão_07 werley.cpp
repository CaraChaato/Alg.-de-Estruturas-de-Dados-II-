#include <stdio.h>
#include <math.h>


int main (){
    float aproximacao = 0, funcao = 0, numero = 20;
    int i;

    funcao = sqrt(numero);
    for (aproximacao = 0; aproximacao*aproximacao < numero; aproximacao+=0.1){

    }
    


    printf("aproximacao: %.2f\n",aproximacao);
    printf("sqrt: %f \n",funcao);
        
    
    return 0;
}