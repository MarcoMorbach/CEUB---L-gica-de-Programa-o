#include<stdio.h>
#include<math.h>

int main(){
    float v1;
    float v2;
    float v3;
    float v4;
    float mg;

    //pedir para inserir valores positivos
    printf("Insira 4 valores positivos");

    //Inserção dos valores
    printf("\nValor 1: ");
    scanf("%f", &v1);

    printf("Valor 2: ");
    scanf("%f", &v2);

    printf("Valor 3: ");
    scanf("%f", &v3);

    printf("Valor 4: ");
    scanf("%f", &v4);

    //Media Aritmetica
    printf("Media Aritmetica simples: %.2f", (v1 + v2 + v3 + v4)/4);

    //Media Geometrica
    mg = pow(v1 * v2 * v3 * v4, 1./4.);
    printf("\nMedia Geometrica: %.2f", mg);

    //Media Harmonica
    printf("\nMedia Harmonica: %.2f", 4/(1/v1 + 1/v2 + 1/v3 + 1/v4));















    return 0;
}
