#include <stdio.h>

int main(){
    float preco;
    float desconto;
    float sub;

    //pedir o valor do produto
    printf("Valor original do produto:R$");
    scanf("%f", &preco);

    //Quanto sera de desconto
    printf("Percentual de desconto: ");
    scanf("%f", &desconto);

    //Valor do desconto aplicado no produto
    printf("Voce ganhou R$%.2f de desconto",sub = (preco * desconto)/100);

    //Valor final do produto
    if(sub > preco){
        printf("\nValor final com desconto:R$%.2f", (preco - sub)*-1);
    }
    else
        printf("\nValor final com desconto:R$%.2f", preco - sub);















    return 0;
}
