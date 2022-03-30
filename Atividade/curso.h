/*
Biblioteca para captar informações sobre o curso
*/

#include<stdio.h>
#include<stdlib.h>

typedef struct informacoes_curso{

    char nome[80];
    char descricaoCurso[200];
    int cargaHoraria;
    char dataInicio[10];
    char dataTermino[10];
    char preco[8];

}curso;

