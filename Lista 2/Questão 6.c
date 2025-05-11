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
                que o teste lógico seja igual ao utilizado no for o qual limita o contador do código
                ate o numero 10, porem o incremento do contador de 1 em 1 teria que ser escrito posteriormente
                no código e dentro do bloco de laço de repetiçao. Nesse sentido, é possivel concluir que é mais
                aconselhavel utilizar o for do que o while devido o contexto do código deixar explicito quando o contador
                deve parar, já quando se utiliza o while, não é explicito quando vai parar o número de repetições.*/








    return 0;
}
