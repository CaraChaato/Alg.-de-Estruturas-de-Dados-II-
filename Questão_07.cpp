#include <stdio.h>
#include <math.h>
#include <locale.h>

int main (){
    
        float num, result;
        printf("Digite um numero: ");
        scanf("%f", &num);
        result = sqrt(num);
        printf ("A raiz quadrada do numero digitado eh: %.2f", result);
    
    return 0;
}