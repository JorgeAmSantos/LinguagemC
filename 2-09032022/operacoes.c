//Programa para efetuar as operações matematicas
#include <stdio.h>      //biblioteca de imput/output
int main()
{
    float a, b, soma, sub, div, mut;         //Duas variaveis
    //Mostrar na tela 
    printf("digite um numero e aperte ENTER\n");
    //Le no teclado scanf
    scanf("%f", &a);
    //Mostar na tela
    printf("digite um numero e aperte ENTER\n");
    //Le no teclado scanf
    scanf("%f", &b);
    //Some os dois numeros 
    soma= a + b;
    //Mostre na tela o resultado
    printf("O resultado da soma é %f\n",soma);
    //Subtraia os dois numeros 
    sub= a - b;
    //Mostre na tela o resultado
    printf("O resultado da subtração é %f\n",sub);
    //Divida os dois numeros 
    div= a / b;
    //Mostre na tela o resultado
    printf("O resultado da divisão é %f\n",div);
    //Multiplique os dois numeros 
    mut= a * b;
    //Mostre na tela o resultado 
    printf("O resultado da multiplicação é %f\n",mut);
    return 0;
} //Fim