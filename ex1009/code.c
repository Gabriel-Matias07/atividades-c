#include <stdio.h>

int main() {
    char name[20];
    double salario_fixo, total, total_vendas;
    float porc;
    scanf("%s", name);
    scanf("%lf", &salario_fixo);
    scanf("%lf", &total_vendas);
    porc = 0.15 * total_vendas;
    total = porc + salario_fixo;
    printf("TOTAL = R$ %.2lf\n", total);
    return 0;
}

/* Não esqueça de remover os comentários de código antes de enviar
By https://github.com/Gabriel-Matias07 */