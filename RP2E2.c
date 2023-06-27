#include<stdio.h>
#include<locale.h>
int main(){
    setlocale(LC_ALL, "Portuguese");

    char codigo;

    printf("Códigos de consumo energético de aparelhos: A, B, C, D e E\n\n");
    printf("Digite um código: \n");
    scanf("%c", &codigo);

    switch(codigo)
    {
    case 'A':
        printf("\nAparelhos: Ventilador e Televisão\n");
        break;
    case 'B':
        printf("\nAparelhos: Aparelho de som e Batedeira\n");
        break;
    case 'C':
        printf("\nAparelhos: Fogão elétrico e Liquidificador\n");
        break;
    case 'D':
        printf("\nAparelhos: Freezer, Geladeira e Máquina de lavar\n");
        break;
    case 'E':
        printf("\nAparelhos: Ar-condicionado e Micro-ondas\n");
    }

    return 0;
}
