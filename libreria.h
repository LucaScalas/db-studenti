#ifndef PROGETTO_LIBRERIA_H
#define PROGETTO_LIBRERIA_H

// Librerie
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#include <time.h>
#include <stdlib.h>

// Macro
#define DIM_NC 63 //dimensione dei vettori "nome" e "cognome" senza il terminatore di stringa
#define DIM_CF 16 //dimensione del vettore "codiceFiscale" senza il terminatore di stringa
#define MATRICE 5 //dimensione della matrice
#define DIM_ELENCO 50 //dimensione del vettore "elenco" senza il terminatore di stringa

// Creazione dell'enumerazione "titoloStudio" da usare dentro la "strutture recordStudente"
typedef enum {diploma, laureaTriennale, laureaMagistrale, altro}Titolo;

// Creazione della struttura "dataNascita" da usare dentro la "strutture recordStudente"
typedef struct {
    int anno;
    int mese;
    int giorno;
}Data;

// Creazione della struttura "recordStudente" che si occuperà di definire i vari dati richiesti.
typedef struct{
    char nome[DIM_NC+1];
    char cognome[DIM_NC+1];
    char codiceFiscale[DIM_CF+1];
    Titolo titoloStudio;
    Data dataNascita;
    int edizione;
    _Bool inCorso;
    float sommaPagata;
}RecordStudente;

// Firme
void svuotaBuffer();
void messaggioLog(char *message);

#endif //PROGETTO_LIBRERIA_H
