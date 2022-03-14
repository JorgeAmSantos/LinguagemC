/*Programa que compara salario para saber,
se ele tem algum desconto*/
//biblioteca input/output
#include <stdio.h>
//Definindo a constante salario
#define LIMITE 5000.00
int main(){
    //Declaração das variavies em float
    float salario;
    //Mostre na tela 
    printf("Digite o valor do salario e aperte ENTER\n");
    //Ler teclado
    scanf("%f", &salario);
    //Desvio de fluxo com if... else 
    if(salario>LIMITE){
        //Mostrar na tela
        printf("O desconto será de %.2f\n", (salario*0.05) );
        printf("O valor final é %.2f\n", salario - (salario*0.05));
    }
    else{
        //Mostrar na tela 
        printf("O funcionario não terá nenhum desconto\n");
    }
    return 0;
}//Fim


