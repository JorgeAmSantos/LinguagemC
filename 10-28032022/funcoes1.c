/*
Programa para trabalhar com funções. vamos usar funções com 
retorno, sem retorno, com argumentos(parâmetros), sem argumentos
*/
#include <stdio.h>
#include <stdlib.h>

void separadorHT(){
    for (int i = 0 ; i <= 62 ; i++){
        printf("#");
    }
}
void separadorLinha(){
    for(int i = 0 ; i <= 62 ; i++){
        printf("_");
    }
}

void main(){
    system("clear"), //Limpar a tela do terminal
    //Chamando a função separadorHT
    separadorHT();
    printf("\n\t\tPrograma que exibe uma mensagem\n ");
    //Chamando a função separadorLInha
    separadorLinha();
}