#include <stdio.h>

int main(){
    int decimal;
    int binario = 0;
    int r;
    int temp;
    int cont = 0;
    int p = 1;

    printf("Insira um numero inteiro positivo para transformar em binario: ");
    scanf("%d", &decimal);
    temp = decimal;

    while(decimal > 0){
        r = decimal % 2;
        binario = binario + r * p;
        p = p * 10;
        decimal = decimal / 2;
    }
    printf("%d_10 = %d_2", temp, binario);









    return 0;
}
