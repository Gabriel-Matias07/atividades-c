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


#include <stdio.h>
 
int main() {
    char NOME[10];
    double SALARYFIX, TOTSELL,TOTAL;
    scanf("%s", NOME);
    scanf("%lf", &SALARYFIX);
    scanf("%lf", &TOTSELL);
    TOTAL = (0.15 * TOTSELL) + SALARYFIX;
    printf("TOTAL = R$ %.2lf\n", TOTAL);
    return 0;
}