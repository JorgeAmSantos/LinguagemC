//Programa para efetuar a divisão de um numero
//Biblioteca de imput/output
#include <stdio.h>
int main()
{
    float a, b, div;
    //Mostrar na tela
    printf("Digite um numero e aperte ENTER\n");
    //Le no teclado scanf
    scanf("%f", &a);
    //Mostrar na tela
    printf("Digite um numero e aperte ENTER\n");
    //Le no teclado scanf
    scanf("%f", &b);
    //Divida os dois numeros
    div= a / b;
    //Mostre na tela 
    printf("O resultado da divisão é %f",div);
    return 0;
} //Fim