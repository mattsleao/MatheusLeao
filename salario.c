#include <stdio.h>

int main() {
    int numF, horasT;
    double valorH, salario;

    scanf("%d %d %lf", &numF, &horasT, &valorH);

    salario = horasT*valorH;

    printf("NUMBER = %d\nSALARY = U$ %0.2f\n", numF, salario);

    return 0;
}
