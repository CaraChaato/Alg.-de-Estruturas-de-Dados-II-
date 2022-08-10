#include <stdio.h>
#include <string.h>

int main(){
    char palavra[50], inversa[50];
    int i;
    printf("digite uma palavra:");
    scanf("%s", &palavra);

    // funcao para copiar a string "palavra" para a string "inversa"
    strcpy(inversa, palavra);  

    // funcoa para inverter a string
    strrev(inversa);    

    // analisa se as strings sao iguais
    i = strcmp(palavra, inversa);
    if(i == 0){
        printf("Eh palindromo\n");
    }
    else{
        printf("N eh palindromo\n");
    }
    return 0;
}