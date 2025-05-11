#include <stdio.h>
#include <math.h>

int main(){
    float v1;
    float v2;
    float v3;
    float v4;
    float med;
    float var;

    //pedir para inserir os numeros reais
    printf("Insira 4 numeros reais");

    //Inserção dos numeros
    printf("\nValor 1: ");
    scanf("%f", &v1);

    printf("Valor 2: ");
    scanf("%f", &v2);

    printf("Valor 3: ");
    scanf("%f", &v3);

    printf("Valor 4: ");
    scanf("%f", &v4);

    //Media Aritmetica
    med = (v1 + v2 + v3 + v4)/4;
    printf("Media Aritmetica Simples: %.2f", med);

    //Variancia
    var = (pow(v1 - med, 2) + pow(v2 - med, 2) + pow(v3 - med, 2) + pow(v4 - med, 2))/4;
    printf("\nVariancia: %.2f", var);

    //Desvio padrao
    printf("\nDesvio Padrao: %.2f", sqrt(var));















    return 0;
}
