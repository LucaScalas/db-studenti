#ifndef PROGETTO_STAMPA_H
#define PROGETTO_STAMPA_H

// File header
#include "libreria.h"

// Firme
void stampaNome(RecordStudente studente);
void stampaCognome(RecordStudente studente);
void stampaCodiceFiscale(RecordStudente studente);
void stampaTitoloDiStudio(RecordStudente studente);
void stampaDataNascita(RecordStudente studente);
void stampaDellEdizione(RecordStudente studente);
void stampaInCorso(RecordStudente studente);
void stampaSommaPagata(RecordStudente studente);
void stampaStudente(RecordStudente studente);
void stampaStudenti(int dim, RecordStudente elenco[]);
void stampaEdizione(int dim, RecordStudente elenco[]);
void stampaOrdineAlfabetico(int dim, RecordStudente elenco[]);
void stampaOrdineAnnoNascita(int dim, RecordStudente elenco[]);
void cercaStudente(int dim, RecordStudente elenco[]);
void calcolaEntrate(int dim, RecordStudente elenco[]);
void titoloStudio(int dim, RecordStudente elenco[]);

#endif