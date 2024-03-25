#include <stdio.h>

int main(){
    int codigoPeca1, codigoPeca2, numPecas1, numPecas2;
    double valorPeca1, valorPeca2, valorTotal;
    scanf("%d %d %lf", &codigoPeca1, &numPecas1, &valorPeca1);
    scanf("%d %d %lf", &codigoPeca2, &numPecas2, &valorPeca2);
    valorTotal = (valorPeca1 * numPecas1) + (valorPeca2 * numPecas2);
    printf("VALOR A PAGAR: R$ %.2lf\n", valorTotal);
    return 0;
}