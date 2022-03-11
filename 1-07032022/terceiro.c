//Programa p/ calcular area, dado o raio
#include <stdio.h>  //Bibliotecastandar de imput/output
#define PI 3.14159  //Constante pi
//A seguir a função main()
int main()
{
    float raio, area;   //duas vars. declaradas 
    //mostra na tela uma mensagemn com printf
    printf("Digite o valor do raio do circulo, e ENTER\n");
    //Le do teclado com scanf; note o & em &raio
    scanf("%f", &raio); //Exemplos: 1.2312.3e -1
    //A seguir mostra na tela o valor do raio lido
    //Usando 12 colunas, e 2 decimaius arredondados
    //Por ex. 1,576 é arredondado para 1,58, só na tela
    printf("Raio digitado é' %12.2f\n", raio);
    area = PI * raio * raio;
    printf("Area do circulo com raio %f é %f\n", raio, area);
    return 0;
}//Fim raio