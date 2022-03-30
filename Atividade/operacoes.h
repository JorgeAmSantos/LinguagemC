#include<stdio.h>
#include<stdlib.h>
#include"curso.h"
#include"unidade.h"

void gravar(){

    FILE *arquivo;
    arquivo = fopen("dados.txt", "w");
    
    if(arquivo == NULL){
        printf("Arquivo não encontrado ou não existe");
        exit(1);
    }

curso curso, *pcurso;
unidade unidade, *punidade;

pcurso = &curso;
punidade = &unidade;

printf("Digite nome do curso e aperte ENTER\n");
fgets(pcurso->nome,100,stdin);

printf("Digite a descrição do curso e aperte ENTER\n");
fgets(pcurso->descricaoCurso,200,stdin);

printf("Digite a carga horaria do curso e aperte ENTER\n");
scanf("%d", &pcurso->cargaHoraria);

printf("Digite a data de inicio e aperte ENTER\n");
fgets(pcurso->dataInicio,10,stdin);

printf("Digite a data de termino e aperte ENTER\n");
fgets(pcurso->dataTermino,10,stdin);

printf("Digite preço e aperte ENTER\n");
fgets(pcurso->preco,10,stdin);

printf("Digite o nome da unidade e aperte ENTER\n");
fgets(punidade->nomeUnidade,80,stdin);

printf("Digite a localização e aperte ENTER\n");
fgets(punidade->localizacao,100,stdin);

printf("Digite o horario de funcionamento aperte ENTER\n");
fgets(punidade->horarioAtendimento,20,stdin);

printf("Digite o telefone e aperte ENTER\n");
fgets(punidade->telefone,10,stdin);

fprintf(arquivo,pcurso->nome);
fprintf(arquivo,pcurso->descricaoCurso);
fprintf(arquivo,pcurso->cargaHoraria);
fprintf(arquivo,pcurso->dataInicio);
fprintf(arquivo,pcurso->dataTermino);
fprintf(arquivo,pcurso->preco);
fprintf(arquivo,punidade->nomeUnidade);
fprintf(arquivo,punidade->localizacao);
fprintf(arquivo,punidade->horarioAtendimento);
fprintf(arquivo,punidade->telefone);

fclose(arquivo);

}