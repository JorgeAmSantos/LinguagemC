/*
Programa para trabalhar com funções. vamos usar funções com 
retorno, sem retorno, com argumentos(parâmetros), sem argumentos
*/
#include <stdio.h>
#include <stdlib.h>

void separadorHT(){
    printf("\n");
    for (int i = 0 ; i <= 62 ; i++){
        printf("#");
    }
    printf("\n");
}
void separadorLinha(){
    for(int i = 0 ; i <= 62 ; i++){
        printf("_");
    }
    printf("\n");
}
void pularLinha(int qtdVezes){
    for(int i = 1 ; i <= qtdVezes ; i++){
        printf("\n");
    }
}
char* comparar(int v1, int v2){
    if(v1 > v2){
        return"O primeiro número é maior que o segundo número\n";
    }
    else if(v1 == v2){
        return"O primeiro número é igual o segundo número\n";
    }
    else 
        return"O segundo número é maior que o primeiro numero\n";
}

void main(){
    int n1, n2;
    system("clear"); //Limpar a tela do terminal
    //Chamando a função separadorHT
    separadorHT();
    printf("\n\t\tPrograma que exibe uma mensagem\n ");
    //Chamando a função separadorLInha
    separadorLinha();
    printf("digite o primeiro número ");
    scanf("%d", &n1);
    printf("digite o segundo número ");
    scanf("%d", &n2);
    pularLinha(2);
    printf(comparar(n1,n2));
    pularLinha(2);
    separadorLinha();
    separadorHT();
}