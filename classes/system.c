#include "../headers/system.h"

System cria_sistema(int tempoMaxRoundRobin) {
    System novoSistema;
    novoSistema.lista_io = lst_cria();
    novoSistema.lista_prontos = filaLista_cria();
    //novoSistema.cpu = cria_processador(tempoMaxRoundRobin);
    novoSistema.contadorTotalProcessosNoSistema = 0;
    return novoSistema;
}