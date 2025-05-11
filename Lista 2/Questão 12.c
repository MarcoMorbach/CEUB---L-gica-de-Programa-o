#include <stdio.h>

int main(){
    int r;
    int n3;
    int n;
    int i;
    int term;
    int n1;


    printf("Insira a razao da PA: ");
    scanf("%d", &r);
    printf("Insira o terceiro termo da PA: ");
    scanf("%d", &n3);
    printf("Insira a quantidade de termos que quer visualizar da PA(maior do que 3): ");
    scanf("%d", &n);

    n1 = n3 - 2 * r;
    for(i = 0; i < n; i++){
        term = n1 + i * r;
        printf("%d ", term);
    }








    return 0;
}
