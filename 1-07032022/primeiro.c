#include <stdio.h>  //biblioteca standard de input/output
int main()
{
    int j;                                      //Declaração var j inteira
    printf("Digite um valor inteiro e ENTER\n"); //Mostrar na tela
    scanf("%d", &j);                            //Ler j, Não digitar NADA entre %d
    printf("valor de j é:%d\n",j);
    return 0;
}//Fim