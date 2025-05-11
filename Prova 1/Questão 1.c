#include <stdio.h>
int main(){
    int ano;
    int idade;
    int ano50;

    printf("Insira o seu ano de nascimento: ");
    scanf("%d", &ano);
    idade = 2025 - ano;
    printf("Sua idade no fim do ano de 2025: %d\n", idade);
    ano50 = ano + 50;
    printf("Ano em que voce completara 50 anos: %d", ano50);






    return 0;
}
