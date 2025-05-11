#include <stdio.h>

int main(){
    int num1;
    int num2;
    int temp;
    int mdc;
    int mmc;
    int m;
    int c;

    printf("Insira dois numeros inteiros e positivos para calcular o MMC e o MDC\n");
    printf("Numero 1: ");
    scanf("%d", &num1);
    printf("Numero 2: ");
    scanf("%d", &num2);
    m = num1;
    c = num2;
    while(c != 0){
        temp = c;
        c = m % c;
        m = temp;
    }
    mdc = m;
    mmc = (num1 * num2) / mdc;
    printf("MDC: %d\n", mdc);
    printf("MMC: %d", mmc);











    return 0;
}
