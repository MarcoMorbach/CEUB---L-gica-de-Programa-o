#include <stdio.h>

int main(){
    int num;
    int i = 1;
    int m = 0;
    int T = 1;
    int R;

    printf("Insira um numero inteiro positivo o qual sera a quantidade de numeros da sequencia de fibonacci: ");
    scanf("%d", &num);

    while(i <= num){
        printf("%d\n", m);
        R = T + m;
        m = T;
        T = R;
        i++;
    }




    return 0;
}
