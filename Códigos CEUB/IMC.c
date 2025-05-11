#include <stdio.h>

int main (){
    float massa;
    float altura;
    float IMC;
    //texto insira seu peso
    printf("Insira seu peso: ");

    //Entrada manual do peso
    scanf("%f",&massa);

    //texto insira sua altura
    printf("\nInsira sua altura: ");

    //Entrada manual da altura
    scanf("%f",&altura);

    //calculo do IMC

    IMC=massa/(altura*altura);

    //Texto e resultado do IMC
    printf("\nIMC:%f\n\n",IMC);


return 0;}
