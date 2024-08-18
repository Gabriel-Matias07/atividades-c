#include <stdio.h>

int main(){
    int VEL = 60, DIS = 30, RES, SAIDA;
    scanf("%d", &RES);
    SAIDA = (VEL * RES) / DIS;
    printf("%d minutos\n",SAIDA);
    return 0;
}