#include <stdio.h>
#include <string.h>

void palindromo(char palavra[], int n , int m, int t){
    if(m > 0){
        if(palavra[n] == palavra[m]){
            t++;
            n++;
            m--;
            palindromo(palavra, n, m, t);  
        }
    }

    if(t >= (strlen(palavra) / 2)){
        printf("Eh um Palindromo\n");
    }
    else{
        printf("N eh um Palindromo\n");
    }
}

int main(){
    char palavra[50];
    printf("Insira uma string:\n");
    scanf("%s", &palavra);
    int n, m, t, i;
    n = 0; 
    t = 0; 
    m = (strlen(palavra)) - 1;
    palindromo(palavra, n, m, t);
    return 0;
}