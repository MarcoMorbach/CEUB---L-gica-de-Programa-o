#include <stdio.h>

int main(){
    int num;
    int i;
    int div = 0;

    printf("Insira um numero inteiro para saber se ele e primo ou nao: ");
    scanf("%d", &num);

    for(i = 1; i <= num; i++){
        if(num%i == 0){
            div++;
        }
    }if(div == 2){
        printf("O numero %d e primo", num);
    }else
        printf("O numero %d nao e primo", num);








    return 0;
}
