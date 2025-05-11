#include <stdio.h>

int main(){
    int r;
    int n4;
    int n1;
    int i;
    int term;
    int n;
    int som;

    printf("Insira a razao da PA: ");
    scanf("%d", &r);
    printf("Insira o quarto termo da PA: ");
    scanf("%d", &n4);
    printf("Insira a quantidade de termos que quer visualizar da PA para o calculo da soma: ");
    scanf("%d", &n);

    n1 = n4 - 3 * r;
    for(i = 0; i < n; i++){
        term = n1 + i * r;
        printf("%d ", term);
    }
    som = ((n1 + term) * n) / 2;
    printf("\nSoma dos termos: %d", som);







    return 0;
}
