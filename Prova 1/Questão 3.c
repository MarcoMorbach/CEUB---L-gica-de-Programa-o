#include <stdio.h>
int main(){
    float temp;
    float C;
    float F;
    char s;

    printf("Inserir valor da temperatura: ");
    scanf("%f", &temp);
    printf("Se a temperatura esta em Celsius coloque 'C'e se esta em Fahrenheit coloque 'F': ");
    scanf("%s", &s);

    if(s == 'C'){
        F = (9 * temp) / 5 + 32;
        printf("Valor em Fahrenheit: %.f", F);
    }
    if(s == 'F'){
        C = 5 * (temp - 32) / 9;
        printf("Valor em Celsius: %.f", C);
    }







    return 0;
}
