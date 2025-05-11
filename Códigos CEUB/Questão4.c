#include <stdio.h>

int main(){
    int dia;
    int mes;
    int diff;

    printf("Dia do seu aniversario: ");
    scanf("%d", &dia);

    printf("Mes do seu aniversario: ");
    scanf("%d", &mes);

    if(mes == 4){
        diff = dia - 3;
        if(diff == 0){
            printf("Feliz aniversario!");
        }
        else if(diff>0){
            printf("Faltam %d dia(s) para o seu aniversario.", dia);
        }
            else{
            printf("Passaram %d dia(s) do seu aniversario", -1*dia);
            }
    }

    if(mes == 5){
        printf("Faltam %d dia(s) para o seu aniversario.", dia + 27);
    }
    else if(mes == 6){
        printf("Faltam %d dia(s) para o seu aniversario.", dia + 58);
    }
    else if(mes == 7){
        printf("Faltam %d dia(s) para o seu aniversario.", dia + 88);
    }
    else if(mes == 8){
        printf("Faltam %d dia(s) para o seu aniversaro.", dia + 119);
    }
    else if(mes == 9){
        printf("Faltam %d dia(s) para o seu aniversario.", dia + 149);
    }
    else if(mes == 10){
        printf("Faltam %d dia(s) para o seu aniversario.", dia + 180);
    }
    else if(mes == 11){
        printf("Faltam %d dia(s)para o seu aniversario.", dia + 210);
    }
    else if(mes == 12){
        printf("Faltam %d dia(s) para o seu aniversario.", dia + 241);
    }
    else if(mes == 3){
        printf("Passaram %d dias do seu aniversario.", 34 - dia);
    }
    else if(mes == 2){
        printf("Passaram %d dias do seu aniversario.",61 - dia);
    }
    else if(mes == 1){
        printf("Passaram %d dias do seu aniversario.",92 - dia);
    }








    return 0;
}
