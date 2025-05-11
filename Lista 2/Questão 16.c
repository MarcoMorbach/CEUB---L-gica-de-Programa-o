#include <stdio.h>

int main(){
    float C;
    float M;
    float Mc;
    float i;
    float n;
    int j;

    printf("Insira o valor presente (capital inicial): ");
    scanf("%f", &C);
    printf("Periodo de meses: ");
    scanf("%f", &n);
    printf("Insira a taxa de juros mensal: ");
    scanf("%f\n", &i);
    M = C;
    Mc = C;
    printf("M = R$ %.2f    Mc = R$ %.2f\n",M, Mc);
    for(j = 1; j <= n; j++){
        M = C * (1 + i*j);
        Mc = Mc * (1 + i);
        printf("M = R$ %.2f    Mc = R$ %.2f\n",M, Mc);
    }



    return 0;
}
