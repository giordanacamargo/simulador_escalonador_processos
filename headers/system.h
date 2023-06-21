#ifndef T3_SO_ESCALONADOR_SYSTEM_H
#define T3_SO_ESCALONADOR_SYSTEM_H

#include "filas_lista.h"
#include "listas.h"
#include "processador.h"
#include "dispositivoIO.h"

typedef struct system {
    Fila_lista *lista_prontos;
    Lista *lista_io;
    Processador *processador;
    DispositivoIO *dispositivoIo;
    int contadorTotalProcessosNoSistema;
} System;
#endif //T3_SO_ESCALONADOR_SYSTEM_H
