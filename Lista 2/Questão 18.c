#include <stdio.h>

int main(){
    int n;
    float notas;
    float soma;
    float media;
    float desvio;
    int i;
    float diff;

    printf("Insira o numero de provas: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++){
        printf("Insira a nota da prova %d: ",i + 1);
        scanf("%3f", &notas);
        soma = soma + notas;
        diff += notas * notas;
    }
    media = soma / n;
    desvio = (diff / n) - (media * media);

    printf("\nMedia: %.2f\n", media);
    printf("Desvio padrao: %.2f ", desvio);







    return 0;
}
