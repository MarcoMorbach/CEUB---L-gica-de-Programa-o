#include <stdio.h>

int main(){
    int r;
    int n1;
    int novo;
    int n;
    int i;

    printf("Insira a razao da PA: ");
    scanf("%d", &r);
    printf("Insira o primeiro termo da PA: ");
    scanf("%d", &n1);
    printf("Insira a quantidade de termos que quer visualizar da PA: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        printf("%d ", n1);
        novo = n1 + r;
        n1 = novo;
    }









    return 0;
}
