#include <stdio.h>

int main(){
    int i = 1;
    int n1;
    int n2;
    int T = 1;

    printf("Insira dois numeros inteiros positivos, sendo um a base e o outro o expoente\n");
    printf("Numero 1 (base): ");
    scanf("%d", &n1);
    printf("Numero 2 (expoente): ");
    scanf("%d", &n2);
    while(i <= n2){
        T = T * n1;
        i++;
    }
    printf("Resultado: %d", T);













    return 0;

}
