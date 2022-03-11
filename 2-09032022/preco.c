//Programa que gera preço final e desconto
//Biblioteca de imput/output
#include <stdio.h>
int main()
{
    float preco, valf, perc, vald;
    //Mostar na tela 
    printf("Digite o valor do produto e aperte ENTER\n");
    //Le no teclado scanf
    scanf("%f", &preco);
    //Mostrar na tela 
    printf("Digite a porcentagem de desconto e aperte ENTER\n");
    //Le no teclado scanf 
    scanf("%f", &perc);
    valf= preco - (preco * ((float)perc/(float) 100));
    vald= preco - valf;
    //Mostrar na tela 
    printf("o quantidade de desconto é %f,e o preço final é %f", vald, valf);
    return 0;
}//Fim