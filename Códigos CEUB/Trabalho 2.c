#include <stdio.h>

int main(){
    float num;
    int data;
    int idade;
    printf("Hello, World!\n\n");

    //Texto para o usuário
    printf("Digite um numero:");

    //Entrada manual do usuário
    scanf("%f", &num);

    //Mostrando o número digitado
    printf("\n%f", num);

    //Data de nascimento do usuário
    printf("\n\nAno de nascimento:");

    //Entrada manual do ano de nascimento do usuário
    scanf("%d", &data);

    //Operação da idade

    idade = 2025 - data;

    //Mostrando o ano de nascimento
    printf("\nSua idade sera %d anos.", idade);







     return 0;
}
