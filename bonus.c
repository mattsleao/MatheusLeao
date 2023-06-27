#include <stdio.h>

int main() {

    char nome[50];
    double salario, vendas, total;

    printf("Digite o nome do funcionario: ");
    scanf("%s", &nome);
    printf("\nDigite o salario do funcionario: ");
    scanf("%lf", &salario);
    printf("\nDigite a quantidade de vendas do funcionario: ");
    scanf("%lf", &vendas);

    total = salario + (vendas*0.15);

    printf("\nTOTAL = R$ %0.2f\n", total);

    return 0;
}
