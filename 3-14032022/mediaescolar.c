//Programa que compara nota com média para saber se o aluno está aprovado ou reprovado
// Biblioteca input/output
#include <stdio.h>
//Definindo a constante (sempre em letras maiusculas) media escolar 
#define MEDIA 7.0
int main() {
    float nota_aluno, media_escolar;  //Declaração de variaveis em float
    //Mostre na tela 
    printf("Digite a nota do aluno e tecle ENTER\n");
    //Ler teclado
    scanf("%f", &nota_aluno);

    //Desvio de fluxo com if .. else 
    if(nota_aluno>=MEDIA){
        printf("O Aluno está aprovado!\n");
    }
    else{
        printf("Aluno reprovado!\n");
    }
    return 0;
}//Fim