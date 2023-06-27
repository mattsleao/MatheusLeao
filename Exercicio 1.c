#include <stdio.h>

int main()
{
    char conceito;
    float nota;

    printf("Digite seu conceito: ");
    scanf("%c", &conceito);
    printf("Digite sua nota: ");
    scanf("%f", &nota);
    printf("Seu conceito foi: %c e sua nota foi: %0.2f", conceito, nota);

    return 0;
}
