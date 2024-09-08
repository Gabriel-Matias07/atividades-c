#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b, s, maiorAB, result;
    scanf("%d %d %d", &a, &b, &s);
    maiorAB = (a + b + abs(a - b)) / 2;
    result = (maiorAB+ s + abs(maiorAB - s)) / 2;
    printf("%d eh o maior\n", result);
    return 0;
}

/* Não esqueça de remover os comentários de código antes de enviar
By https://github.com/Gabriel-Matias07 */