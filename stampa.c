#include "stampa.h"
#include "libreria.h"

// Procedura che si occupa della stampa del nome
void stampaNome(RecordStudente studente){
    printf("\nNome: %s", studente.nome); //stampa del nome
}

// Procedura che si occupa della stampa del cognome
void stampaCognome(RecordStudente studente){
    printf("\nCognome: %s", studente.cognome); //stampa del cognome
}

// Procedura che si occupa della stampa del codice fiscale
void stampaCodiceFiscale(RecordStudente studente){
    printf("\nCodice Fiscale: %s", studente.codiceFiscale); //stampa del codice fiscale
}

// Procedura che si occupa della stampa del titolo di studio
void stampaTitoloDiStudio(RecordStudente studente){
    printf("\nTitolo di studio: "); //stampa del titolo di studio
    switch(studente.titoloStudio){
        case diploma:
            printf("Diploma");
            break;
        case laureaTriennale:
            printf("Laurea Triennale");
            break;
        case laureaMagistrale:
            printf("Laurea Magistrale");
            break;
        case altro:
            printf("Altro");
            break;
        default:
            printf("ERRORE NEL CODICE");
    }
}

// Procedura che si occupa della stampa della data di nascita
void stampaDataNascita(RecordStudente studente){
    //stampa della data di nascita
    printf("\nData di nascita (giorno/mese/anno): %d/%d/%d", studente.dataNascita.giorno, studente.dataNascita.mese, studente.dataNascita.anno);

}

// Procedura che si occupa della stampa dell'edizione
void stampaDellEdizione(RecordStudente studente){
    printf("\nEdizione: %d", studente.edizione); //stampa dell'edizione
}

// Procedura che si occupa della stampa della permanenza nel corso
void stampaInCorso(RecordStudente studente){
    if (studente.inCorso == 0) //stampa della permanenza in corso
        printf("\nIn corso: No");
    else printf("\nIn corso: Si");
}

// Procedura che si occupa della stampa della somma pagata
void stampaSommaPagata(RecordStudente studente){
    printf("\nSomma pagata: %.2f EUR", studente.sommaPagata); //stampa della somma pagata
}

// Procedura che si occupa della stampa di tutti i dati di uno studente
void stampaStudente(RecordStudente studente){
    stampaNome(studente);
    stampaCognome(studente);
    stampaCodiceFiscale(studente);
    stampaTitoloDiStudio(studente);
    stampaDataNascita(studente);
    stampaDellEdizione(studente);
    stampaInCorso(studente);
    stampaSommaPagata(studente);
    messaggioLog("Stampati tutti i dati dello studente"); //inserimento del messaggio nel file di testo
}

// Procedura che si occupa di stampare tutti i dati degli studenti
void stampaStudenti(int dim, RecordStudente elenco[]){
    int i;
    for (i = 0; i <dim ; i++) {
        stampaStudente(elenco[i]); //iterazione della funzione stampaStudente per ogni cella iesima dell'elenco
    }
    messaggioLog("Stampati tutti i dati degli studenti nell'elenco"); //inserimento del messaggio nel file di testo
}

// Procedura che si occupa, data un edizione specifica, di stampare tutti i dati degli studenti appartenenti a quell'edizione
void stampaEdizione(int dim, RecordStudente elenco[]){
    int i;
    _Bool flag = false; //variabile creata per continuare o meno l'iterazione
    int cerca; //variabile d'appoggio per contenere l'edizione da confrontare successivamente

    printf("\ninserisci l'edizione degli studenti da cercare:");

    scanf("\n %d", &cerca);
    for (i = 0; i <dim ; i++) {
        if (elenco[i].edizione == cerca){ //se l'edizione dell'elenco corrisponde a quella inserita prosegui
            stampaStudente(elenco[i]); //stampa tutti i dati dello studente con quell'edizione
            flag = true; //e imposta la flag su true
        }
    }
    if (flag == false){ //se la flag rimane su false non ci sono corrispondenze
        printf("\nNessun alunno iscritto nell'edizione corrispondente");
    }
    messaggioLog("Stampati gli studenti con la stessa edizione"); //inserimento del messaggio nel file di testo
}

// Procedura che si occupa di ordinare tutti gli studenti di un elenco in ordine alfabetico e stampare tutti i loro dati
void stampaOrdineAlfabetico(int dim, RecordStudente elenco[]){
    int i;
    int j;

    for (i = 0; i < dim - 1; i++) {
        for (j = i + 1; j < dim; j++) {
            if (strcmp(elenco[i].cognome, elenco[j].cognome) > 0) { //se la strcmp da un risultato maggiore di 0
                elenco[i] = elenco[j]; //scambia l'elenco[i] con l'elenco[j]
                elenco[j] = elenco[i]; //e scambia l'elenco[j] con l'elenco[i]
            }
        }
    }
    for (i = 0; i < dim - 1; i++) {
        for (j = i + 1; j < dim; j++) {
            if (strcmp(elenco[i].cognome, elenco[j].cognome) == 0 && strcmp(elenco[i].nome, elenco[j].nome) > 0) { //se la strcmp da un risultato maggiore di 0
                elenco[i] = elenco[j]; //scambia l'elenco[i] con l'elenco[j]
                elenco[j] = elenco[i]; //e scambia l'elenco[j] con l'elenco[i]
            }
        }
    }

    for (i = 0; i < dim; i++) {
        stampaStudente(elenco[i]); //infine stampa l'elenco in ordine alfabetico
    }
    messaggioLog("Stampati studenti in ordine alfabetico"); //inserimento del messaggio nel file di testo
}

// Procedura che si occupa di ordinare tutti gli studenti dal più piccolo al più grande
void stampaOrdineAnnoNascita(int dim, RecordStudente elenco[]){
    int i;
    int j;

    for (i = 0; i < dim - 1; i++) {
        for (j = i + 1; j < dim; j++) {
            if (elenco[i].dataNascita.anno > elenco[j].dataNascita.anno) { //se l'anno "iesimo" è maggiore di quello "jesimo"
                elenco[i] = elenco[j]; //scambia l'elenco[i] con l'elenco[j]
                elenco[j] = elenco[i]; //e scambia l'elenco[j] con l'elenco[i]
            }
        }
    }
    for (i = 0; i < dim; i++) {
        stampaStudente(elenco[i]); //infine stampa l'elenco in ordine di anno crescente
    }
    messaggioLog("Stampati studenti ordinati per anno di nascita"); //inserimento del messaggio nel file di testo
}

// Procedura che si occupa di cercare e stampare tutti i dati dello studente che ha quel determinato codice fiscale
void cercaStudente(int dim, RecordStudente elenco[]){
    int i;
    _Bool flag = false; //variabile creata per continuare o meno l'iterazione
    char cerca [DIM_CF+1]; //stringa d'appoggio per contenere il codice fiscale da confrontare successivamente

    printf("\ninserisci il codice fiscale dello studente da cercare:");

    scanf("\n %16[^\n]s", cerca); //richiesta del codice fiscale da inserire nella stringa d'appoggio
    for (i = 0; i <dim ; i++) {
        if (strncmp(elenco[i].codiceFiscale, cerca, DIM_CF) == 0){ //se il CF dell'elenco corrisponde a quello inserito prosegui
            stampaStudente(elenco[i]); //stampa tutti i dati dello studente con quel CF
            flag = true; //e imposta la flag su true
        }
    }
    if (flag == false){ //se la flag rimane su false non ci sono corrispondenze
        printf("\nNessun codice fiscale corrispondente");
    }
    messaggioLog("Stampati studenti col codice fiscale inserito"); //inserimento del messaggio nel file di testo
}

// Procedura che si occupa di fare la somma e stampare il risultato di tutte le somme pagate dagli studenti
void calcolaEntrate(int dim, RecordStudente elenco[]){
    int i;
    float somma = 0;

    for (i = 0; i <dim ; i++){
        somma += elenco[i].sommaPagata; //somma tutte le sommePagate di ogni cella dell'elenco iesimo
    }
    printf("\nLe entrate totali ammontano a : %.2f EUR", somma); //stampa della somma totale

    messaggioLog("Stampato calcolo entrate"); //inserimento del messaggio nel file di testo
}

// Procedura che si occupa di dire quanti studenti hanno quel determinato titolo di studio
void titoloStudio(int dim, RecordStudente elenco[]){
    int i;
    int diploma = 0;
    int laureaTriennale = 0;
    int laureaMagistrale = 0;
    int altro = 0;

    for (i = 0; i <dim ; i++){
        if (elenco[i].titoloStudio == 0){ //se un alunno ha questo titolo di studio aggiungi un unità a diploma
            diploma += 1;
        }
        if (elenco[i].titoloStudio == 1){ //se un alunno ha questo titolo di studio aggiungi un unità a laureaTriennale
            laureaTriennale += 1;
        }
        if (elenco[i].titoloStudio == 2){ //se un alunno ha questo titolo di studio aggiungi un unità a laureaMagistrale
            laureaMagistrale += 1;
        }
        if (elenco[i].titoloStudio == 3){ //se un alunno ha questo titolo di studio aggiungi un unità ad altro
            altro += 1;
        }
    }
    printf("\nAlunni con i seguenti titoli di studio:"); //stampa dei dati
    printf("\nDiploma: %d",diploma);
    printf("\nLaurea triennale: %d",laureaTriennale);
    printf("\nLaurea magistrale: %d",laureaMagistrale);
    printf("\nAltro: %d",altro);

    messaggioLog("Stampati studenti ordinati per titolo di studio"); //inserimento del messaggio nel file di testo
}