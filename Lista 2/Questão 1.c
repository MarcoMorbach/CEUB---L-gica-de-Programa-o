#include <stdio.h>

int main(){
    int num;
    int i = 0;
    float som = 0.;
    float media;

    do{
        printf("Digite um numero inteiro: ");
        scanf("%d", &num);
        som = som + num;
        i++;

    }
    while(num >= 0);
    media = som / i;
    printf("Media: %.2f", media);











    return 0;
}
