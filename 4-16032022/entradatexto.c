/*
Programa pede ao usuario que digite 
o seu nome, Ao fazer será alocado a 
variavel nome
*/
//Biblioteca input/output
#include <stdio.h>

int main(){
    char username[80];
    printf("Digite seu nome e aperte ENTER\n");
    scanf("%s", username);
    printf("%s\n", username);
    return 0;
}