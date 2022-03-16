/*Programa para calcular a situação 
do aluno. neste programa teremos
as seguintes saidas:
    Aprovado, quando a nota maior ou igual a 7
    Reprovado, quando a nota menor ou igual a 4
    Recuperação, quando nota entre maior que 4 e
    menor que 7*/
    //Biblioteca input/output
    #include <stdio.h>
    //Definindo a constante 
    #define MEDAPROV 7.0
    #define MEDREPROV 4.0
    int main(){
        float nota_aluno, media_escolar;
        printf("Digite a nota do aluno e aperte ENTER\n");
        scanf("%f", &nota_aluno);

    //Desvio de fluxo 
    if(nota_aluno>=MEDAPROV){
        printf("O aluno está aprovado!\n");
    }
    else if(nota_aluno<=MEDREPROV){
        printf("O aluno está reprovado!\n");
    }
    else{
        printf("O aluno está em recuperação!\n");
    }
    return 0;
    }//Fim
