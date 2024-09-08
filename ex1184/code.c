#include <stdio.h>

int main() {
    float Matriz[12][12], soma = 0;
    int i, j, abaixo_diagonal = 0;
    char resposta;

    scanf("%c", &resposta);

    for (i = 0; i < 12; i++) {
        for (j = 0; j < 12; j++) {
            scanf("%f", &Matriz[i][j]);
            if (j < i) { 
                soma += Matriz[i][j];
                abaixo_diagonal++;
            }
        }
    }
    if (resposta == 'M') {
        soma /= abaixo_diagonal;
    }
        printf("%.1f\n", soma);
    return 0;
}

/* Não esqueça de remover os comentários de código antes de enviar
By https://github.com/Gabriel-Matias07 */