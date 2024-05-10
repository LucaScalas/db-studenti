#ifndef PROGETTO_CRITTATURA_H
#define PROGETTO_CRITTATURA_H

// File header
#include "libreria.h"

// Firme
void criptaNome(char nome[]);
void criptaCognome(char cognome[]);
void criptaCodiceFiscale(char codiceFiscale[]);
RecordStudente criptaStudente();
RecordStudente decriptaStudente();
RecordStudente criptaDati(int dim, RecordStudente elenco[]);
RecordStudente decriptaDati(int dim, RecordStudente elenco[]);

#endif