typedef struct listaf {
    int info;
    struct lista *prox;
} Listaf;

typedef struct fila_lista {
    Listaf *ini;
    Listaf *fim;
} Fila_lista;


Fila_lista *filaLista_cria(void);

void filaLista_insere(Fila_lista *f, int valor);

int filaLista_retira(Fila_lista *f);

void filaLista_imprime(Fila_lista *f);

int filaLista_vazia(Fila_lista *f);

void filaLista_libera(Fila_lista *f);