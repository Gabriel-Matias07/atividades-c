#include <stdio.h>

int main(){
    int N, C; /* numero de leituras realizado pelo sensor e capacidade maxida do elevador */
    int S, E; /*entraram e sairam*/
    int T = 0, cond = 0; /*var de total e condicao*/

    scanf("%d %d", &N, &C);
    for (int i = 0; i < N; i ++){
        scanf("%d %d", &S, &E);
        T += E - S;
        if (T > C || T < 0 ){
            cond = 1;
        }
    }
    if(cond != 0){
            printf("S\n");
        }
        else{
            printf("N\n");
        }
    return 0;
}


/* Não esqueça de remover os comentários de código antes de enviar
By https://github.com/Gabriel-Matias07 */