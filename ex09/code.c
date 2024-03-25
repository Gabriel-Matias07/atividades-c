#include <stdio.h>

int main(){
    int NUMBER, HOURS;
    float VALUE_HOURS, SALARY;
    scanf("%d", &NUMBER);
    scanf("%d", &HOURS);
    scanf("%f", &VALUE_HOURS);
    SALARY = (HOURS * VALUE_HOURS);
    printf("NUMBER = %d\n", NUMBER);
    printf("SALARY = U$ %.2f\n", SALARY);
    return 0;
}