#include "inserimento.h"
#include "libreria.h"

// Procedura che si occupa di raccogliere i dati del nome
void richiediNome(char nome[]){
    printf("\ninserisci il nome:");
    scanf("\n %63[^\n]s", nome); //richiesta del nome
    svuotaBuffer();
}

// Procedura che si occupa dei controlli della procedura "richiediNome"
void richiediNomeCtrl(char nome[]){
    int i;
    _Bool inputValido; //variabile per controllare se i caratteri inseriti sono corretti

    do {
        richiediNome(nome);
        inputValido = 1; //imposto il valore di inputValido ad 1 come condizione di validità
        for (i = 0; nome[i] != '\0'; ++i) {
            if (nome[i] >= '0' && nome[i] <= '9') { //la condizione permette di capire se nella stringa sono presenti numeri
                inputValido = 0; //se sono presenti numeri il valore di inputValido viene impostato a 0 e l'iterazione continua
            }
        }
    } while (!inputValido); //se il valore di inputValido rimane a 1 l'iterazione finisce
}

// Procedura che si occupa di raccogliere i dati del cognome
void richiediCognome(char cognome[]){
    printf("\ninserisci il cognome:");
    scanf("\n %63[^\n]s", cognome); //richiesta del cognome
    svuotaBuffer();
}

// Procedura che si occupa dei controlli della procedura "richiediCognome"
void richiediCognomeCtrl(char cognome[]){
    int i;
    _Bool inputValido; //variabile per controllare se i caratteri inseriti sono corretti

    do {
        richiediCognome(cognome);
        inputValido = 1; //imposto il valore di inputValido a 1 come condizione di validità
        for (i = 0; cognome[i] != '\0'; ++i) {
            if (cognome[i] >= '0' && cognome[i] <= '9') { //la condizione permette di capire se nella stringa sono presenti numeri
                inputValido = 0; //se sono presenti numeri il valore di inputValido viene impostato a 0 e l'iterazione continua
            }
        }
    } while (!inputValido); //se il valore di inputValido rimane a 1 l'iterazione finisce
}

// Procedura che si occupa di raccogliere i dati del codice fiscale
void richiediCodiceFiscale(char codiceFiscale[]){
    printf("\ninserisci il codice fiscale:");
    scanf("\n %16[^\n]s", codiceFiscale); //richiesta dei dati del codice fiscale
    svuotaBuffer();
}

// Procedura che si occupa dei controlli della procedura "richiediCodiceFiscale"
void richiediCodiceFiscaleCtrl(char codiceFiscale[]) {
    int i = 0;
    int j = 0;

    richiediCodiceFiscale(codiceFiscale);

    for (i = 0; codiceFiscale[i] != '\0'; i++) { //iterazione per ogni cella che non abbia il terminatore di stringa
        if (codiceFiscale[i] != ' ') { //se la cella iesima non contiene uno spazio prosegui
            if (codiceFiscale[i] >= 'a' && codiceFiscale[i] <= 'z') { //se la cella iesima contiene una lettera minuscola dalla 'a' alla 'z' prosegui
                codiceFiscale[j++] = codiceFiscale[i] - ('a' - 'A'); //rendi la lettera della cella maiuscola
            } else { //se è uno spazio prosegui
                codiceFiscale[j++] = codiceFiscale[i]; //sovrascrivi la cella con la successiva
            }
        }
    }
    codiceFiscale[j] = '\0'; //imposta nella cella jesima il terminatore di stringa
}

// Funzione che si occupa di raccogliere i dati del titolo di studio
int richiediTitoloDiStudio(int titoloStudio){
    do{
        printf("\ninserisci il titolo di studio (0=diploma | 1=laurea triennale | 2=laurea magistrale | 3=altro):");
        scanf("\n %d", &titoloStudio); //richiesta dei dati del titolo di studio
        svuotaBuffer();
    } while (titoloStudio < 0 || titoloStudio > 3); //controllo per non inserire valori al di fuori di quelli possibili
    return titoloStudio;
}

// Funzione che si occupa di raccogliere i dati del mese della data di nascita
int richiediMese(int mese){
    do {
        printf("\nmese (da 1 a 12):");
        scanf("\n %d", &mese); //richiesta del mese
        svuotaBuffer();
    } while (mese < 1 || mese > 12); //controllo fatto per evitare di inserire mesi inesistenti
    return mese;
}

// Funzione che si occupa di raccogliere i dati del giorno della data di nascita con eventuali controlli
int richiediGiorno(int mese, int giorno){
    switch (mese) { //ogni mese ha un suo case in modo da non avere mesi con giorni in più
        case 1: //gennaio
            do {
                printf("\ngiorno (max 31 per Gennaio):");
                scanf("\n %d", &giorno); //richiesta del giorno
                svuotaBuffer();
            }
            while (giorno < 1 || giorno > 31); //giorni selezionabili
            break;
        case 2: //febbraio
            do {
                printf("\ngiorno (max 28 per Febbraio):");
                scanf("\n %d", &giorno); //richiesta del giorno
                svuotaBuffer();
            }
            while (giorno < 1 || giorno > 28); //giorni selezionabili
            break;
        case 3: //marzo
            do {
                printf("\ngiorno (max 31 per Marzo):");
                scanf("\n %d", &giorno); //richiesta del giorno
                svuotaBuffer();
            }
            while (giorno < 1 || giorno > 31); //giorni selezionabili
            break;
        case 4: //aprile
            do {
                printf("\ngiorno (max 30 per Aprile):");
                scanf("\n %d", &giorno); //richiesta del giorno
                svuotaBuffer();
            }
            while (giorno < 1 || giorno > 30); //giorni selezionabili
            break;
        case 5: //maggio
            do {
                printf("\ngiorno (max 31 per Maggio):");
                scanf("\n %d", &giorno); //richiesta del giorno
                svuotaBuffer();
            }
            while (giorno < 1 || giorno > 31); //giorni selezionabili
            break;
        case 6: //giugno
            do {
                printf("\ngiorno (max 30 per Giugno):");
                scanf("\n %d", &giorno); //richiesta del giorno
                svuotaBuffer();
            }
            while (giorno < 1 || giorno > 30); //giorni selezionabili
            break;
        case 7: //luglio
            do {
                printf("\ngiorno (max 31 per Luglio):");
                scanf("\n %d", &giorno); //richiesta del giorno
                svuotaBuffer();
            }
            while (giorno < 1 || giorno > 31); //giorni selezionabili
            break;
        case 8: //agosto
            do {
                printf("\ngiorno (max 31 per Agosto):");
                scanf("\n %d", &giorno); //richiesta del giorno
                svuotaBuffer();
            }
            while (giorno < 1 || giorno > 31); //giorni selezionabili
            break;
        case 9: //settembre
            do {
                printf("\ngiorno (max 30 per Settembre):");
                scanf("\n %d", &giorno); //richiesta del giorno
                svuotaBuffer();
            }
            while (giorno < 1 || giorno > 30); //giorni selezionabili
            break;
        case 10: //ottobre
            do {
                printf("\ngiorno (max 31 per Ottobre):");
                scanf("\n %d", &giorno); //richiesta del giorno
                svuotaBuffer();
            }
            while (giorno < 1 || giorno > 31); //giorni selezionabili
            break;
        case 11: //novembre
            do {
                printf("\ngiorno (max 30 per Novembre):");
                scanf("\n %d", &giorno); //richiesta del giorno
                svuotaBuffer();
            }
            while (giorno < 1 || giorno > 30); //giorni selezionabili
            break;
        case 12: //dicembre
            do {
                printf("\ngiorno (max 31 per Dicembre):");
                scanf("\n %d", &giorno); //richiesta del giorno
                svuotaBuffer();
            }
            while (giorno < 1 || giorno > 31); //giorni selezionabili
            break;
        default:
            printf("\n ERRORE NEL CODICE");
    }
    return giorno;
}

// Funzione che si occupa di raccogliere i dati dell'anno della data di nascita
int richiediAnno(int anno){
    printf("\nanno:");
    scanf("\n %d", &anno); //richiesta dell'anno
    svuotaBuffer();
    return anno;
}

// Funzione che si occupa di raccogliere i dati dell'edizione
int richiediEdizione(int edizione){
    do {
        printf("\ninserisci l'edizione:");
        scanf("\n %d", &edizione); //richiesta dei dati dell'edizione
        svuotaBuffer();
    } while (edizione <1); //controllo affinchè l'edizione sia maggiore di 0
    return edizione;
}

// Funzione che si occupa di raccogliere i dati della permanenza nel corso
int richiediInCorso(int inCorso){
    do {
        printf("\ninserisci sei in corso? (0=no | 1=si):");
        scanf("\n %d", &inCorso); //richiesta dei dati della permanenza nel corso
        svuotaBuffer();
    } while (inCorso < 0 || inCorso > 1); //controllo per poter selezionare solo 1 o 0
    return inCorso;
}

// Funzione che si occupa di raccogliere i dati della somma pagata
float richiediSommaPagata(float sommaPagata){
    do{
        printf("\ninserisci la somma pagata:");
        scanf("\n %f", &sommaPagata); //richiesta dei dati della somma pagata
        svuotaBuffer();
    } while (sommaPagata <0); //controllo per evitare che la somma versata sia negativa
    return sommaPagata;
}

// Funzione che si occupa di raccogliere tutti i dati dello studente
RecordStudente inserisciStudente(){
    RecordStudente studente;
    richiediNomeCtrl(studente.nome);
    richiediCognomeCtrl(studente.cognome);
    richiediCodiceFiscaleCtrl(studente.codiceFiscale);
    studente.titoloStudio = richiediTitoloDiStudio(studente.titoloStudio);
    studente.dataNascita.mese = richiediMese(studente.dataNascita.mese);
    studente.dataNascita.giorno = richiediGiorno(studente.dataNascita.mese, studente.dataNascita.giorno);
    studente.dataNascita.anno = richiediAnno(studente.dataNascita.anno);
    studente.edizione = richiediEdizione(studente.edizione);
    studente.inCorso = richiediInCorso(studente.inCorso);
    studente.sommaPagata = richiediSommaPagata(studente.sommaPagata);
    messaggioLog("Inseriti i dati dello studente"); //inserimento del messaggio nel file di testo
    return studente;
}

// Funzione che si occupa di raccogliere tutti i dati degli studenti
RecordStudente inserisciStudenti(int dim, RecordStudente elenco[]){
    int i;
    for (i = 0; i <dim ; i++) {
        elenco[i] = inserisciStudente(); //itera la funzione inserisciStudente per ogni cella iesima dell'elenco
    }
    messaggioLog("Inseriti i dati degli studenti nell'elenco"); //inserimento del messaggio nel file di testo
    return elenco[dim];
}