#include <stdio.h>
int main(){
    int p = 0;
    int n = 0;
    int num;

    printf("Insira numeros inteiros (zero para parar o programa): ");
    scanf("%d", &num);

    while(num != 0){
        if(num > 0){
            p++;
        }
        else{
            n++;
        }
        printf("Insira numeros inteiros e caso coloque o zero o programa para: ");
        scanf("%d", &num);
    }
    printf("Positivos: %d\nNegativos: %d", p, n);
    if(p == n){
        printf("\nMesma quantidade de positivos e negativos");
    }
    else if(p > n){
           printf("\nMaior quantidade de positivos");
    }
         else
            printf("\nMaior quantidade de negativos");










    return 0;
}
