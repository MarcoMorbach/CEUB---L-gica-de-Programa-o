#include <stdio.h>

int main(){
    int n;
    int fat = 1;
    int i;

    printf("Insira um numero inteiro nao negativo para mostrar o seu fatorial: ");
    scanf("%d", &n);

    for(i = n; i > 0; i--){
        fat = fat * i;
    }
    printf("Fatorial: %d\n", fat);






    return 0;
}
