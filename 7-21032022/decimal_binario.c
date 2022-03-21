/*
Programa para converção de decimal para binario
*/
#include <stdio.h>
int main(){
    int decimal = 0;
    int resto = 1;
    int multiplicador = 1;
    int resultado = 0;
    printf("Digite um número e aperte Enter\n");
    scanf("%d",&decimal);
    while(decimal!=0){ //Vai dividir até chegar no número 0
    resto = decimal % 2; //Pega o resto da divisão que sempre vai ser 0 ou 1 pois é um conversor binario
    decimal = decimal/2; //Divisão para calculo binario
    resultado = resultado + resto * multiplicador; //Aqui é para saber o resultado
    multiplicador = multiplicador*10; // Essa parte verve para colocar o número 1 na frente 
    }
    printf("%d\n",resultado);
    return 0;
}


