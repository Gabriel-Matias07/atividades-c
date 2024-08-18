#include <stdio.h>

int main(){
    int x;
    float y, result;
    scanf("%d", &x);
    scanf("%f", &y);
    result = x / y;
    printf("%.3f km/l\n", result);
    return 0;
}