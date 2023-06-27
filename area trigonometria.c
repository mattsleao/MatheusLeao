#include <stdio.h>
#define PI 3.14159

int main() {
    double a, b, c, triangulo, circulo, trapezio, quadrado, retangulo;

    scanf("%lf %lf %lf", &a, &b, &c);

    triangulo = (a*c)/2;
    circulo = PI*c*c;
    trapezio = ((a+b)*c)/2;
    quadrado = b*b;
    retangulo = a*b;

    printf("TRIANGULO: %0.3f\nCIRCULO: %0.3f\nTRAPEZIO: %0.3f\nQUADRADO: %0.3f\nRETANGULO: %0.3f\n", triangulo, circulo, trapezio, quadrado, retangulo);

    return 0;
}
