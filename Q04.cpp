/**
 * Questão 04: 4 Calcule recursivamente a função binomial tal como descrito abaixo.
 */

#include <stdio.h>

// Funcoes binomial e fatorial
int binomial(int n, int k);
int fatorial(int f);

int main(){
    int n, k;
    printf("insira dois inteiros: "); // Solicito ao usuario que insira dois numeros inteiros e os leio
    scanf("%d %d", &n, &k);

    /**
     * Testo se o calculo pode ser feito
     *      Se sim, escrevo o resultado chamando a funcao dentro do printf
     *      Se nao, exibo uma mensagem de erro (n deve ser maior que k)
     */
    printf("\nFuncao Binomial de %d e %d = %d\n\n", n, k, binomial(n, k));
    return 0;
}

int binomial(int n, int k){
    if((n == k) && (k == 0)){ // Caso n == k == 0 a funcao retorna 1 
        return 1;
    } else{ // Caso contrario, o calculo e feito de acordo com a formula
        /**
         *     Coeficiente Binomial
         * 
         *  (n)         n!
         *  (k) =   -----------
         *          k! * (n-k)!
         */
        return(( fatorial(n-1) / (fatorial(k-1) * fatorial((n-1) - (k-1))) ) 
        + ( fatorial(n-1) / ( fatorial(k) * fatorial((n-1)-k))) );
    }
}

int fatorial(int f){ // Funcao que calcula o fatorial de um numero inteiro
    /*
    if(f <= 1){
        return (f);}
    else{
        return(f * fatorial(f-1));}
    */
    return((f <= 1)?f: (f * fatorial(f-1)));
}