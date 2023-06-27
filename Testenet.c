//================================================================
// Descricao: O programa calcula e mostra o en�simo termo
//            da sequ�ncia Fibonacci sem uso de recursividade.
//================================================================

// Bibliotecas
#include <stdio.h>
#include <stdlib.h>

// Prot�tipo da fun��o fibonacci
int fibonacci(int n);

// Fun��o Principal
int main(int argc, char** argv) {
    int n;

    // L� a posi��o do termo
    printf("Digite a posicao: ");
    scanf("%d", &n);

    // Imprime o termo
    printf("O termo: %d\n", fibonacci(n));

    system("pause");
    return 0;
}

// Fun��o Fibonacci
int fibonacci(int n) {
    int anterior = 0,
        proximo = 1,
        aux,
        i;

    // Se for o primeiro n�mero da lista
    if(n == 1) {
        return 0;
    // Se for o segundo n�mero da lista
    } else if(n == 2) {
        return 1;
    // Se for um n�mero a partir da terceira posi��o
    } else {
        // Calcula os valores dois a dois at� chegar na posi��o requerida
        for(i = 3; i <= n; i++) {
            aux = proximo;
            proximo = anterior + proximo;
            anterior = aux;
        }
        return proximo;
    }
}
