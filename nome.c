#include<stdio.h>

int main(){

    char nome[50];
    int idade;
    float peso;

    printf("Qual o seu nome?: ");
    scanf ("%s", &nome);
    printf("Qual a sua idade?: ");
    scanf ("%d", &idade);
    printf("Qual o seu peso?: ");
    scanf ("%f", &peso);

    printf("\n\nSeu nome eh %s, voce tem %d anos, e pesa %0.2f quilos.\n\n", nome, idade, peso);

return 0;
}
