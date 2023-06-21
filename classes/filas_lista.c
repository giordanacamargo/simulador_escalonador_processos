#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../headers/filas_lista.h"

Fila_lista *filaLista_cria(void) {
    Fila_lista *f = (Fila_lista *) malloc(sizeof(Fila_lista));
    f->ini = f->fim = NULL;
    return f;
}

void filaLista_insere(Fila_lista *f, int valor) {
    Listaf *l = (Listaf *) malloc(sizeof(Listaf));
    l->info = valor;
    l->prox = NULL;

    if (f->fim != NULL)
        f->fim->prox = l;
    else
        f->ini = l;

    f->fim = l;
}

int filaLista_retira(Fila_lista *f) {
    Listaf *l = f->ini;
    int valor = l->info;

    f->ini = l->prox;

    if (f->ini == NULL)
        f->fim = NULL;


    free(l);

    return valor;
}

void filaLista_imprime(Fila_lista *f) {
    Listaf *l;

    for (l = f->ini; l != NULL; l = l->prox)
        printf("%d ", l->info);
}

int filaLista_vazia(Fila_lista *f) {
    return (f->ini == NULL);
}

void filaLista_libera(Fila_lista *f) {
    Listaf *l = f->ini;
    Listaf *q = l;
    while (q != NULL) {
        l = q->prox;
        free(q);
        q = l;
    }

    free(f);
}	