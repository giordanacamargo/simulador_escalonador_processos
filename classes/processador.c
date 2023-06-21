#include <stdio.h>
#include <unistd.h>
#include "../headers/processador.h"
#include "../headers/util.h"

Processador cria_processador(int tempoMaxRoundRobin) {
    Processador novaCPU;
    novaCPU.tempoRoundRbin = tempoMaxRoundRobin;
    novaCPU.processo->id = 0;
    return novaCPU;
}


void processa_processo(Processador *processador, Processo *p) {
    int tempoRoundRobinTotal = processador->tempoRoundRbin;
    printf("Tempo de round-robin: ");
    imprimeInteiro(processador->tempoRoundRbin);
    printf("vou processar o %d\n", (*p).id);
    while (processador->tempoRoundRbin != 0) {
        printf("estou processando\n");
        if (p->tempoExecucao == 0) {
            break;
        } else {
            sleep(1);
            processador->tempoRoundRbin--;
            p->tempoExecucao--;
        }
    }
    processador->tempoRoundRbin = tempoRoundRobinTotal;
}