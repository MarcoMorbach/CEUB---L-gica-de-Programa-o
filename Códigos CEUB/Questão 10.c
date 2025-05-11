#include <stdio.h>

int main(){
    int v1;
    int v2;
    int v3;

    //Inserir os 3 numeros inteiros
    printf("Valor 1: ");
    scanf("%d", &v1);

    printf("Valor 2: ");
    scanf("%d", &v2);

    printf("Valor 3: ");
    scanf("%d", &v3);

    //Mostrar na tela o maior
    if(v1 > v2 && v1 > v3){
        printf("Valor do maior numero: %d", v1);

    }
    else
        if(v2 > v1 && v2 > v3){
            printf("Valor do maior numero: %d", v2);

        }
        else
            printf("Valor do maior numero: %d", v3);




    return 0;
}
