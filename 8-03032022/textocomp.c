#include <stdio.h>
#include <stdlib.h>
void main()
{
    char produto[30];
    printf("informe nome do produto: \n");
    scanf("\n%[^\n]s", produto);

    printf("Produto: %s \n", produto);
}