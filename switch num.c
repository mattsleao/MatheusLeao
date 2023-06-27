#include<stdio.h>
int main(){

    int num;
    printf("Digite um numero de 1 a 5: ");
    scanf("%d", &num);

    switch(num)
        {
        case 1:
            printf("Um");
            break;

        case 2:
            printf("Dois");
            break;

        case 3:
            printf("Tres");
            break;

        case 4:
            printf("Quatro");
            break;

        case 5:
            printf("Cinco");
            break;

        default:
            printf("ERRO: insira  numero entre 1 e 5");
            break;
        }

return 0;
}
