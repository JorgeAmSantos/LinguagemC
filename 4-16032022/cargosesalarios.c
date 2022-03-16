/*
Programa vai receber a variavel cargo,
e depois apontar o salário do mesmo cargo
*/
#include <stdio.h>
/*
definindo a constante cargo para conparar 
e descobrir o salário do mesmo
*/

int main (){
    char cargo[30];
    //Mostrar na tela
    printf("Digite o cargo que deseja saber o salário e aperte ENTER\n");
    //Ler teclado
    scanf("%s", cargo);

/* 
Desvio de fluxo, para descobrir o salário de 
cada cargo
*/
if (strcmp(cargo, "diretor")==0){
    printf("O salário de Diretor é R$15.000,00\n");
}
else if (strcmp(cargo, "gerente")==0){
    printf("O salário de Gerente é R$12.000,00\n");
}
else if (strcmp(cargo, "analista")==0){
    printf("O salário de Analista é R$8.000,00\n");
}
else if (strcmp(cargo, "assistente")==0){
    printf("O salário de Auxiliar é R$4.000,00\n");
}
else{
    printf("Não ha salário\n");
}
return 0;
}