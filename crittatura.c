#include "crittatura.h"
#include "libreria.h"

// Procedura che si occupa di criptare i dati del nome
void criptaNome(char nome[]){
    int i = 0;
    while (nome[i] != '\0') {
        if (nome[i] >= 'a' && nome[i] <= 'z') { //criptatura per le lettere minuscole
            nome[i] = 'z' - (nome[i] - 'a'); //cambia la lettera della cella iesima della stringa con la sua speculare
        } else if (nome[i] >= 'A' && nome[i] <= 'Z') { //criptatura per le lettere maiuscole
            nome[i] = 'Z' - (nome[i] - 'A'); //cambia la lettera della cella iesima della stringa con la sua speculare
        }
        i++; //permette di andare avanti con l'iterazione
    }
}

// Procedura che si occupa di criptare i dati del cognome
void criptaCognome(char cognome[]){
    int i = 0;
    while (cognome[i] != '\0') {
        if (cognome[i] >= 'a' && cognome[i] <= 'z') { //criptatura per le lettere minuscole
            cognome[i] = 'z' - (cognome[i] - 'a'); //cambia la lettera della cella iesima della stringa con la sua speculare
        } else if (cognome[i] >= 'A' && cognome[i] <= 'Z') { //criptatura per le lettere maiuscole
            cognome[i] = 'Z' - (cognome[i] - 'A'); //cambia la lettera della cella iesima della stringa con la sua speculare
        }
        i++; //permette di andare avanti con l'iterazione
    }
}

// Procedura che si occupa di criptare i dati del codice fiscale
void criptaCodiceFiscale(char codiceFiscale[]){
    int i = 0;
    while (codiceFiscale[i] != '\0') {
        if (codiceFiscale[i] >= 'a' && codiceFiscale[i] <= 'z') { //criptatura per le lettere minuscole
            codiceFiscale[i] = 'z' - (codiceFiscale[i] - 'a'); //cambia la lettera della cella iesima della stringa con la sua speculare
        } else if (codiceFiscale[i] >= 'A' && codiceFiscale[i] <= 'Z') { //criptatura per le lettere maiuscole
            codiceFiscale[i] = 'Z' - (codiceFiscale[i] - 'A'); //cambia la lettera della cella iesima della stringa con la sua speculare
        }
        i++; //permette di andare avanti con l'iterazione
    }
}

// Funzione che si occupa di criptare i dati dello studente
RecordStudente criptaStudente(){
    RecordStudente studente;
    criptaNome(studente.nome);
    criptaCognome(studente.cognome);
    criptaCodiceFiscale(studente.codiceFiscale);
    messaggioLog("Criptati i dati dello studente"); //inserimento del messaggio nel file di testo
    return studente;
}

// Funzione che si occupa di decriptare i dati dello studente
RecordStudente decriptaStudente(){
    RecordStudente studente;
    criptaNome(studente.nome);
    criptaCognome(studente.cognome);
    criptaCodiceFiscale(studente.codiceFiscale);
    messaggioLog("Decriptati i dati dello studente"); //inserimento del messaggio nel file di testo
    return studente;
}

// Funzione che si occupa di criptare i dati degli studenti contenuti in un elenco
RecordStudente criptaDati(int dim, RecordStudente elenco[]){
    int i;
    for (i = 0; i <dim ; i++) {
        elenco[i] = criptaStudente(); //iterata la funzione criptaStudente per ogni cella iesima dell'elenco
    }
    messaggioLog("Criptati i dati degli studenti nell'elenco"); //inserimento del messaggio nel file di testo
    return elenco[dim];
}

// Funzione che si occupa di decriptare i dati degli studenti contenuti in un elenco
RecordStudente decriptaDati(int dim, RecordStudente elenco[]) {
    int i;
    for (i = 0; i < dim; i++) {
        elenco[i] = criptaStudente(); //iterata la funzione criptaStudente per ogni cella iesima dell'elenco
    }
    messaggioLog("Decriptati i dati degli studenti nell'elenco"); //inserimento del messaggio nel file di testo
    return elenco[dim];
}