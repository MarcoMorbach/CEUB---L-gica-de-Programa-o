#include <stdio.h>

int main(){
    float num;
    int data;
    int idade;
    printf("Hello, World!\n\n");

    //Texto para o usu�rio
    printf("Digite um numero:");

    //Entrada manual do usu�rio
    scanf("%f", &num);

    //Mostrando o n�mero digitado
    printf("\n%f", num);

    //Data de nascimento do usu�rio
    printf("\n\nAno de nascimento:");

    //Entrada manual do ano de nascimento do usu�rio
    scanf("%d", &data);

    //Opera��o da idade

    idade = 2025 - data;

    //Mostrando o ano de nascimento
    printf("\nSua idade sera %d anos.", idade);







     return 0;
}
