//Programa para efetuar o calculo da velocidade media 
//biblioteca imput/output
#include <stdio.h>
int main()
{
    float esp, tem, vm;
    //Mostrar na tela 
    printf("Digite valor de tempo e aperte ENTER\n");
    //Le no teclado scanf
    scanf("%f", &tem);
    //mostrar na tela 
    printf("Digite valor de espaço e aperte ENTER\n");
    //Le no teclado scanf
    scanf("%f", &esp);
    //Calcule a velocidade media
    vm= tem / esp;
    //Mostrar na tela 
    printf("A velocidade media é %f KM/H", vm);
    return 0;
} //Fim