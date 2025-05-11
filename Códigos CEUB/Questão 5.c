#include <stdio.h>

int main(){
    float preco;
    float desconto;

    //pedir o valor do produto
    printf("Valor original do produto:R$");
    scanf("%f",&preco);

    //Valor do desconto
    printf("Voce ganhou R$%.2f de desconto",desconto = preco * 0.2);

    //Valor final com desconto
    printf("\nValor final com desconto:R$%.2f",(desconto - preco)*-1);
















    return 0;
}
