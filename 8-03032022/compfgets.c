#include <stdio.h>
#include <stdlib.h>
void main()
{
    char produto[30];
    printf("informe nome do produto: \n");
    fgets(produto, 30, stdin);

    printf("Produto: %s \n", produto);
}