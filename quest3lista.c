//Problema 3 Palíndromo;
//Não finalizado

#include <stdio.h>
#include <string.h>

int main (){
    int l, x, y, iguais;
    char string[50], stringContrario[50];

    printf ("Digite uma frase: ");
    gets(string); //armazenando a string;

    l = strlen(string); //comprimento da string; caracteres;

    for (x = l-1, y = 0; x >= 0; x++, y++){
        stringContrario[y] = string[x];

    }
        //comparando as strings
    iguais = strcmp(string, stringContrario);

    printf ("\n%d\n", iguais);
    
}