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

    //Apresentação em ordem crescente
    if(v1 < v2 && v2 < v3){
        printf("Ordem crescente: %d,%d,%d",v1,v2,v3);
    }
    else if(v1 < v3 && v3 < v2){
        printf("Ordem crescente: %d,%d,%d",v1,v3,v2);
    }
    else if(v2 < v1 && v1 < v3){
        printf("Ordem crescente: %d,%d,%d",v2,v1,v3);
    }
    else if(v2 < v3 && v3 < v1){
        printf("Ordem crescente: %d,%d,%d",v2,v3,v1);
    }
    else if(v3 < v1 && v1 < v2){
        printf("Ordem crescente: %d,%d,%d",v3,v1,v2);
    }
    else if(v3 < v2 && v2 < v1){
        printf("Ordem crescente: %d,%d,%d",v3,v2,v1);
    }













    return 0;
}
