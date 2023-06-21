#ifndef T3_SO_ESCALONADOR_PROCESSADOR_H
#define T3_SO_ESCALONADOR_PROCESSADOR_H

#include "processos.h"

typedef struct processador {
    Processo *processo;
    int tempoRoundRbin;
} Processador;

Processador cria_processador(int tempoMaxRoundRobin);

void processa_processo(Processador *processador, Processo *p);

#endif //T3_SO_ESCALONADOR_PROCESSADOR_H
