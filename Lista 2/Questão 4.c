#include <stdio.h>

int main(){
    float orc;
    float T;
    float serv;
    float servt = 0;
    int I = 1;
    float total;

    printf("insira o valor total do orcamento(valor igual ou maior do que R$100.00): ");
    scanf("%f", &orc);

    do{
        printf("Valor de servico %d: ",I);
        scanf("%f", &serv);
        serv = serv + servt;
        servt = serv;
        total += serv;
        printf("Servico %d. Valor total parcial: %2.f\n\n", I, serv);
        I++;
    }while(servt < orc);
    printf("Nenhum outro servico podera ser executado, pois o orcamento ja foi completamente utilizado ou o orcamento foi ultrapassaado.");










    return 0;
}
