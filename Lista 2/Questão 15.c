#include <stdio.h>

int main(){
    int r;
    int n3;
    int n1;
    int i;
    int term;
    int n;
    int som;

    printf("Insira a razao da PG: ");
    scanf("%d", &r);
    printf("Insira o terceiro termo da PG: ");
    scanf("%d", &n3);
    printf("Insira a quantidade de termos que quer visualizar da PG para o calculo da soma: ");
    scanf("%d", &n);

    n1 = n3 / (r * r);
    term = n1;
    for(i = 0; i < n; i++){
        printf("%d ", term);
        som = som + term;
        term = term * r;
    }
        printf("\nSoma dos termos: %d", som);









    return 0;
}
