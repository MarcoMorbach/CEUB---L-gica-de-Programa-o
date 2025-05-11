#include <stdio.h>

int main(){
    float nota;

    printf("Insira uma nota entre zero e dez: ");
    scanf("%f", &nota);

    if(nota >= 0 && nota <= 10){
        //nota valida
    }
    else{
        while(nota > 10){
            printf("Nota invalida, por favor insira novamente.\n");
            printf("Insira uma nota entre zero e dez: ");
            scanf("%f", &nota);
        }
    }






    return 0;
}
