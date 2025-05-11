#include <stdio.h>
int main(){
    int num1;
    int num2;
    int m;
    int d;
    int div = 2;
    int mmc = 1;
    int mdc = 1;

    printf("Insira dois números inteiros positivos:\n");
    printf("Numero 1: ");
    scanf("%d", &num1);
    printf("Numero 2: ");
    scanf("%d", &num2);

    m = num1;
    d = num2;
    printf("\nEtapas do calculo do MMC:\n");
    while (m != 1 || d != 1){
        if (m % div == 0 || d % div == 0) {
            printf("%d %d | %d\n", m, d, div);
            if (m % div == 0) d /= div;
            if (m % div == 0) d /= div;
            mmc = mmc * div;

            if (num1 % div == 0 && num2 % div == 0) {
                mdc *= div;
                num1 = num1 / div;
                num2 = num2 / div;
            }
        } else {
            div++;
        }
    }
    printf("1 1\n");
    printf("\nMMC: %d\n", mmc);
    printf("MDC: %d\n", mdc);



    return 0;
}
