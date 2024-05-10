#include "libreria.h"
#include "inserimento.h"
#include "stampa.h"
#include "generazione.h"
#include "crittatura.h"

int main() {
    // Messaggio di log di apertura del programma
    messaggioLog("Avvio del programma");

    // Inizializzazione del seed per la funzione rand
    srand(time(NULL));

    // Creazione dei dati di uno studente (assegnando i dati in fase di dichiarazione)
    RecordStudente studente;

    // Creazione di un array che conterrà tutte le informazioni degli studenti
    RecordStudente elenco [DIM_ELENCO+1];

    // Funzioni usate nel main

    // Parte 3
    //studente = inserisciStudente();
    //stampaStudente(studente);

    /*studente = generaStudente();
    stampaStudente(studente);*/

    // Parte 5
    //elenco[DIM_ELENCO] = generaStudenti(DIM_ELENCO,elenco);
    //stampaStudenti(DIM_ELENCO,elenco);

    //elenco[DIM_ELENCO] = generaStudenti(DIM_ELENCO,elenco);
    //stampaStudenti(DIM_ELENCO,elenco);
    //calcolaEntrate(DIM_ELENCO,elenco);
    //titoloStudio(DIM_ELENCO,elenco);
    //cercaStudente(DIM_ELENCO,elenco);
    //stampaEdizione(DIM_ELENCO,elenco);

    // Parte 7
    /*studente = generaStudente();
    studente = criptaStudente();
    stampaStudente(studente);
    studente = decriptaStudente();
    stampaStudente(studente);*/

    //elenco[DIM_ELENCO] = generaStudenti(DIM_ELENCO,elenco);
    //stampaOrdineAlfabetico(DIM_ELENCO,elenco);
    //stampaOrdineAnnoNascita(DIM_ELENCO,elenco);

    // Messaggio di log di arresto del programma
    messaggioLog("Arresto del programma");
    return 0;
}
