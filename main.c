#include <stdio.h>
#include <stdlib.h>
#include "headers/util.h"
#include "headers/listas.h"
#include "headers/filas_lista.h"

#define MAX_LINE_LENGTH 100


int grauML = 0;                             // número máximo de processos dentro do sistema
int tempoTotalSimulacao = 0;
int fatiaTempoEscalonadorRoundRobin = 0;    //tempo que cada processo deve ficar na CPU
int intervaloGeracaoProcessos = 0;
int tempoExecucao = 0;
int contadorTotalProcessos = 0;             // número total de processos produzidos

void le_arquivo() {
    // Arquivo a ser lido
    FILE *file;
    char line[MAX_LINE_LENGTH];
    int lineNumber = 1;

    // Abra o arquivo para leitura
    file = fopen("inputFile.txt", "r");
    if (file == NULL) {
        printf("Falha ao abrir o arquivo.\n");
        exit(1);
    }

    // Leia cada linha do arquivo e armazene em uma variável
    while (fgets(line, MAX_LINE_LENGTH, file) != NULL) {
        if (lineNumber == 1) {
            tempoTotalSimulacao = atoi(line);;
        } else if (lineNumber == 2) {
            grauML = atoi(line);
        } else if (lineNumber == 3) {
            fatiaTempoEscalonadorRoundRobin = atoi(line);
        }
        lineNumber++;
    }

    // Feche o arquivo
    fclose(file);
}

int main() {

    le_arquivo();
    intervaloGeracaoProcessos = gerarNumeroAleatorio(1, 10);
    printf("Tempo de intervalo de geração de processos: %d\n", intervaloGeracaoProcessos);

    if (tempoTotalSimulacao == 0 || grauML == 0 || fatiaTempoEscalonadorRoundRobin == 0 ||
        intervaloGeracaoProcessos == 0) {
        printf("Falha ao ler o arquivo. Os valores não são válidos.\n");
        exit(1);
    }

    imprimeInteiro(tempoTotalSimulacao);

    // Lista de espera (para entrar no sistema)
    Fila_lista *lst_arrive = filaLista_cria();
//    System sistema;
//    sistema = cria_sistema(fatiaTempoEscalonadorRoundRobin);

    // laço principal do programa.
//    while (tempoExecucao <= tempoTotalSimulacao) {
//        sleep(1);
//        tempoExecucao++;
//        printf("Tempo de execução: ");
//        imprimeInteiro(tempoExecucao);
//        if (tempoExecucao % intervaloGeracaoProcessos == 0) {
//
//            Processo p = cria_processo(contadorTotalProcessos);
//            contadorTotalProcessos++;
//
//            // Caso o grau de multiprogramação ainda permitir, ele vai para a fila de prontos.
//            if (sistema.contadorTotalProcessosNoSistema <= grauML) {
//                insere_processo_sistema(&sistema, &p);
//            } else {
//                lista_arrive = lst_insere(lista_arrive, p);
//            }
//        }
//    }
}









