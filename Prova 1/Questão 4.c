#include <stdio.h>

int main() {
    int n;
    int i;
    int m;

    printf("Insira um número maior que 5 para ser a quantidade de linhas da inicial do nome: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        for (m = 0; m < n; m++) {
            if (m == 0 || m == n - 1 || (i == m && i <= n / 2) || (i + m == n - 1 && i <= n / 2)) {
                printf("x");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
