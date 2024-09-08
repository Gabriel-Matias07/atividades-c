#include <stdio.h>
#include <math.h>

int main(){
    double A, B, C;
    double TRIANGULO, CIRCULO, TRAPEZIO, QUADRADO, RETANGULO;
    scanf("%lf %lf %lf", &A, &B, &C);
    TRIANGULO = (A * C) / 2;
    CIRCULO = (3.14159 * pow(C, 2));
    TRAPEZIO = (A + B) * C / 2; 
    QUADRADO = pow(B, 2);
    RETANGULO = A * B;
    printf("TRIANGULO: %.3lf\n", TRIANGULO);
    printf("CIRCULO: %.3lf\n", CIRCULO);
    printf("TRAPEZIO: %.3lf\n", TRAPEZIO);
    printf("QUADRADO: %.3lf\n", QUADRADO);
    printf("RETANGULO: %.3lf\n", RETANGULO);
    return 0;
}

/* Não esqueça de remover os comentários de código antes de enviar
By https://github.com/Gabriel-Matias07 */