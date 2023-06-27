#include <stdio.h>
int main(){

    char nome;
    char inicial;

    scanf("%c", &nome);
    fflush(stdin);
    scanf("%c", &inicial);

    printf("%c e %c", nome, inicial);

    return 0;

}
