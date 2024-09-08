#include <stdio.h>

int main() {
    int N, Ci, Vi;
    while (1) {
        scanf("%d", &N);
        if (N == 0) break;
        int pares = 0;
        int retangulos = 0;
        for (int i = 0; i < N; i++) {
            scanf("%d %d", &Ci, &Vi);
            pares += Vi / 2;
        }
        retangulos = pares / 2;
        printf("%d\n", retangulos);
    }
    return 0;
}

/* Não esqueça de remover os comentários de código antes de enviar
By https://github.com/Gabriel-Matias07 */