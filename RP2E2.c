#include<stdio.h>
#include<locale.h>
int main(){
    setlocale(LC_ALL, "Portuguese");

    char codigo;

    printf("C�digos de consumo energ�tico de aparelhos: A, B, C, D e E\n\n");
    printf("Digite um c�digo: \n");
    scanf("%c", &codigo);

    switch(codigo)
    {
    case 'A':
        printf("\nAparelhos: Ventilador e Televis�o\n");
        break;
    case 'B':
        printf("\nAparelhos: Aparelho de som e Batedeira\n");
        break;
    case 'C':
        printf("\nAparelhos: Fog�o el�trico e Liquidificador\n");
        break;
    case 'D':
        printf("\nAparelhos: Freezer, Geladeira e M�quina de lavar\n");
        break;
    case 'E':
        printf("\nAparelhos: Ar-condicionado e Micro-ondas\n");
    }

    return 0;
}
