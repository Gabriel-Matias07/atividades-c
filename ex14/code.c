#include <stdio.h>

int main(){
    int A, B, S, maiorAB, maiorAS, maiorBS;
    scanf("%d %d %d", &A, &B, &S);
    maiorAB = (A + B + ABS(A - B)) / 2;
    printf("%d", maiorAB);
    return 0;
}