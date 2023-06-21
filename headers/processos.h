#ifndef T3_SO_ESCALONADOR_PROCESSOS_H
#define T3_SO_ESCALONADOR_PROCESSOS_H

typedef struct processo {
    int id;
    int tempoExecucao;
    int prioridadeIO;
    int intervaloSolicitacoesIO;
    int tempoIO;
} Processo;

#endif //T3_SO_ESCALONADOR_PROCESSOS_H
