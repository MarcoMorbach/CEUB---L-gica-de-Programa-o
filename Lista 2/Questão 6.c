#include <stdio.h>

int main(){
    int num;
    int i;

    printf("Insira um numero para mostrar a tabuada do numero inserido: ");
    scanf("%d", &num);
    for(i = 1; i <= 10; i++){
        printf("%d x %2d = %3d\n", num, i, num*i);
    }
    /* Resposta:Essa tarefa poderia ser sim realizada utilizando while, pois tal comando permite
                que o teste l�gico seja igual ao utilizado no for o qual limita o contador do c�digo
                ate o numero 10, porem o incremento do contador de 1 em 1 teria que ser escrito posteriormente
                no c�digo e dentro do bloco de la�o de repeti�ao. Nesse sentido, � possivel concluir que � mais
                aconselhavel utilizar o for do que o while devido o contexto do c�digo deixar explicito quando o contador
                deve parar, j� quando se utiliza o while, n�o � explicito quando vai parar o n�mero de repeti��es.*/








    return 0;
}
