#include <stdio.h>

int main(){
    int r;
    int n1;
    int n;
    int i;

    printf("Digite o primeiro termo da PG: ");
    scanf("%d", &n1);

    printf("Digite a razao da PG: ");
    scanf("%d", &r);

    printf("Digite numero de termos da PG: ");
    scanf("%d", &n);


    for(i = 1; i <= n; i++){
        printf("%d ", n1);
        n1 = n1 * r;
    }






    return 0;
}
