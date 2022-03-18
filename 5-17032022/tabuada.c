/*
Programa para calcular a tabuada de 
acordo com a entrada do usúario
*/
#include <stdio.h>
int main(){
    int n;
    int mult;
        printf("Digite um número para tabuada\n");
        scanf("%d", &n);
        for(mult = 0 ; mult <= 10 ; mult++){
            printf("%d x %d = %d\n", n, mult, (n*mult));
        }
    return 0;
}