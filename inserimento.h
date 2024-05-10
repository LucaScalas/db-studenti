#ifndef PROGETTO_INSERIMENTO_H
#define PROGETTO_INSERIMENTO_H

// File header
#include "libreria.h"

// Firme
void richiediNome(char nome[]);
void richiediNomeCtrl(char nome[]);
void richiediCognome(char cognome[]);
void richiediCognomeCtrl(char cognome[]);
void richiediCodiceFiscale(char codiceFiscale[]);
void richiediCodiceFiscaleCtrl(char codiceFiscale[]);
int richiediTitoloDiStudio(int titoloStudio);
int richiediMese(int mese);
int richiediGiorno(int mese, int giorno);
int richiediAnno(int anno);
int richiediEdizione(int edizione);
int richiediInCorso(int inCorso);
float richiediSommaPagata(float sommaPagata);
RecordStudente inserisciStudente();
RecordStudente inserisciStudenti(int dim, RecordStudente elenco[]);

#endif