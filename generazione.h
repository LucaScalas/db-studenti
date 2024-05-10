#ifndef PROGETTO_GENERAZIONE_H
#define PROGETTO_GENERAZIONE_H

// File header
#include "libreria.h"

// Firme
void generaNomeRandom(char nome[]);
void generaNomeLista(char nome[]);
void generaCognomeRandom(char cognome[]);
void generaCognomeLista(char cognome[]);
void generaCodiceFiscaleRandom(char codiceFiscale[]);
void generaCodiceFiscaleLista(char codiceFiscale[]);
int generaTitoloDiStudio(int titoloStudio);
int generaMese(int mese);
int generaGiorno(int mese, int giorno);
int generaAnno(int anno);
int generaEdizione(int edizione);
int generaInCorso(int inCorso);
float generaSommaPagata(float sommaPagata);
RecordStudente generaStudente();
RecordStudente generaStudenti(int dim, RecordStudente elenco[]);

#endif