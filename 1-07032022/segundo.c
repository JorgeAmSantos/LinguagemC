#include <stdio.h>                              //Biblioteca standard de imput/output
int main()
{
    char car;
    printf("Digite um caractere e Enter\n");    //Declaração var car do tipo char 
    scanf("%c", &car);                          //mostrar na tela 
    printf("Caractere digitado e' %c\n", car);  //%c para ler char ou mostrar o char 1 ou char  
    return 0;
    //mostrou na tela valor de car lido
} //fim main