#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int gerarNumeroAleatorio(int min, int max) {
    srand(time(NULL)); // Inicializa a semente do gerador de números aleatórios

    // Gera um número aleatório no intervalo [min, max]
    int numero = (rand() % (max - min + 1)) + min;

    return numero;
}

void imprimeInteiro(int inteiro) {
    printf("%d\n", inteiro);
}