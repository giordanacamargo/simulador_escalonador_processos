cmake_minimum_required(VERSION 3.25)
project(T3_SO_Escalonador C)

set(CMAKE_C_STANDARD 17)

add_executable(T3_SO_Escalonador main.c classes/util.c headers/util.h classes/filas_lista.c classes/filas_vetor.c classes/listas.c headers/filas_lista.h headers/filas_vetor.h headers/listas.h classes/system.c headers/system.h headers/processos.h headers/processador.h headers/dispositivoIO.h classes/processador.c)
