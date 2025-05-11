#include <stdio.h>

int main(){

    char genero;
    int peso;
    int altura;
    int idade;
    float TMB;
    int Homem;
    int Mulher;

    Homem = 1;
    Mulher = 2;

    printf("Qual e o seu genero?: ");
    scanf("%s", genero);

    printf("Qual e o seu peso em Kg?: ");
    scanf("%d", &peso);

    printf("Qual e a sua altura em cm?: ");
    scanf("%d", &altura);

    printf("Qual e a sua idade?: ");
    scanf("%d", &idade);

    if(genero = 1){
        TMB = 66.47 + (13.75 * peso) + (5.003 * altura) - (6.755 * idade);
        printf("TMB = %.3f", TMB);
    }
    else
        TMB = 655.09 + (9.563 * peso) + (1.85 * altura) - (4.676 * idade);
        printf("TMB = %.3f", TMB);












    return 0;
}
