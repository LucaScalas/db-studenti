cmake_minimum_required(VERSION 3.26)
project(progetto C)

set(CMAKE_C_STANDARD 90)

add_executable(progetto main.c
        libreria.c
        libreria.h
        inserimento.c
        inserimento.h
        stampa.c
        stampa.h
        generazione.c
        generazione.h
        crittatura.c
        crittatura.h)
