/*
Programa que exibe uma mensagem de boas vindas ao
nosso usuário
*/
//Biblioteca de input/output
#include <stdio.h>

int main(){

    char texto[21] = "Olá! Seja Bem Vindo ";
    /*
    Mostrar em tela, com printf a cadeia de texto
    com %s já que %c é para só um caracter.
    */
    printf("%s\n", texto);

    return 0;
}//Fim