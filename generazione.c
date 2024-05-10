#include "generazione.h"
#include "libreria.h"

// Procedura che si occupa di generare casualmente i dati del nome
void generaNomeRandom(char nome[]){
    int i;
    int lettereTotali;
    char carattereRandomMinuscolo;
    char carattereRandomMaiuscolo;

    lettereTotali = 26;  //numero delle lettere dell'alfabeto -1

    for (i = 0; i <DIM_NC; i++) {
        carattereRandomMinuscolo = 'a' + rand() % lettereTotali;  //genera un carattere casuale minuscolo
        nome[i] = carattereRandomMinuscolo;
    }
    carattereRandomMaiuscolo = 'A' + rand() % lettereTotali;  //genera un carattere casuale minuscolo
    nome[0] = carattereRandomMaiuscolo;
}

// Procedura che si occupa di generare casualmente i dati del nome da una lista predefinita
void generaNomeLista(char nome[]){
    //creazione di una stringa a due dimensione per contenere i nomi predefiniti
    char stringa[MATRICE+1][DIM_NC+1]={"Lorenzo","Mario","Luca","Fabio","Alessandro","Luigi"};
    //copia di un nome random nella stringa del nome dello studente
    strcpy(nome,stringa[rand()%MATRICE]);
}

// Procedura che si occupa di generare casualmente i dati del cognome
void generaCognomeRandom(char cognome[]){
    int i;
    int lettereTotali;
    char carattereRandomMinuscolo;
    char carattereRandomMaiuscolo;

    lettereTotali = 26;  //numero delle lettere dell'alfabeto -1

    for (i = 0; i <DIM_NC; i++) {
        carattereRandomMinuscolo = 'a' + rand() % lettereTotali;  //genera un carattere casuale minuscolo
        cognome[i] = carattereRandomMinuscolo;
    }
    carattereRandomMaiuscolo = 'A' + rand() % lettereTotali;  //genera un carattere casuale minuscolo
    cognome[0] = carattereRandomMaiuscolo;
}

// Procedura che si occupa di generare casualmente i dati del cognome da una lista predefinita
void generaCognomeLista(char cognome[]){
    //creazione di una stringa a due dimensione per contenere i cognomi predefiniti
    char stringa[MATRICE+1][DIM_NC+1]={"Contu","Scalas","Soggia","Pisu","Rossi", "Bianchi"};
    //copia di un cognome random nella stringa del cognome dello studente
    strcpy(cognome,stringa[rand()%MATRICE]);
}

// Procedura che si occupa di generare casualmente i dati del codice fiscale
void generaCodiceFiscaleRandom(char codiceFiscale[]){
    int i;

    for (i = 0; i < DIM_CF; i++) {
        if (rand() % 2 == 0) { //numero random che può far uscire solo 1 e 0 (booleano)
            codiceFiscale[i] = 'A' + rand() % 26; //se = 0 genera un carattere maiuscolo random
        } else {
            codiceFiscale[i] = '0' + (rand() % 10); //se = 1 genera un numero random
        }
    }
    codiceFiscale[DIM_CF] = '\0'; //imposta l'ultima nell'ultima cella il terminatore di stringa
}

// Procedura che si occupa di generare casualmente i dati del codice fiscale da una lista predefinita
void generaCodiceFiscaleLista(char codiceFiscale[]){
    //creazione di una stringa a due dimensione per contenere i codici fiscali predefiniti
    char stringa[MATRICE+1][DIM_NC+1]={"KJKQCN88R69I364J","TDDTZQ74C14A067M","QPGLTA61H21M118Y","SBSHNW93T02E015G","JMLMDS51R28B783U","ZYCNTL83M12H830K"};
    //copia di un codice fiscale random nella stringa del codice fiscale dello studente
    strcpy(codiceFiscale,stringa[rand()%MATRICE]);
}

// Funzione che si occupa di generare casualmente i dati del titolo di studio
int generaTitoloDiStudio(int titoloStudio){
    int max = 4;
    titoloStudio = rand() % max; //numero random che può generare solo le opzioni possibili
    return titoloStudio;
}

// Funzione che si occupa di generare casualmente i dati del mese
int generaMese(int mese){
    int min = 1;
    int max = 11;
    mese = min + rand() % max; //numero random che può generare solo le opzioni possibili
    return mese;
}

// Funzione che si occupa di generare casualmente i dati del giorno
int generaGiorno(int mese, int giorno){
    int min = 1;
    int max31 = 31;
    int max30 = 30;
    int max28 = 28;

    switch (mese) { //in base al mese ogni case permette di generare solo giorni compatibili col mese
        case 1: //gennaio
            giorno = min + rand() % max31; //numero random che può generare solo le opzioni possibili
            break;
        case 2: //febbraio
            giorno = min + rand() % max28; //numero random che può generare solo le opzioni possibili
            break;
        case 3: //marzo
            giorno = min + rand() % max31; //numero random che può generare solo le opzioni possibili
            break;
        case 4: //aprile
            giorno = min + rand() % max30; //numero random che può generare solo le opzioni possibili
            break;
        case 5: //maggio
            giorno = min + rand() % max31; //numero random che può generare solo le opzioni possibili
            break;
        case 6: //giugno
            giorno = min + rand() % max30; //numero random che può generare solo le opzioni possibili
            break;
        case 7: //luglio
            giorno = min + rand() % max31; //numero random che può generare solo le opzioni possibili
            break;
        case 8: //agosto
            giorno = min + rand() % max31; //numero random che può generare solo le opzioni possibili
            break;
        case 9: //settembre
            giorno = min + rand() % max30; //numero random che può generare solo le opzioni possibili
            break;
        case 10: //ottobre
            giorno = min + rand() % max31; //numero random che può generare solo le opzioni possibili
            break;
        case 11: //novembre
            giorno = min + rand() % max30; //numero random che può generare solo le opzioni possibili
            break;
        case 12: //dicembre
            giorno = min + rand() % max31; //numero random che può generare solo le opzioni possibili
            break;
        default:
            printf("\n ERRORE NEL CODICE");
    }
    return giorno;
}

// Funzione che si occupa di generare casualmente i dati dell'anno
int generaAnno(int anno){
    anno = rand(); //numero totalmente random positivo
    return anno;
}

// Funzione che si occupa di generare casualmente i dati dell'edizione
int generaEdizione(int edizione){
    edizione = rand(); //numero totalmente random positivo
    return edizione;
}

// Funzione che si occupa di generare casualmente i dati della permanenza nel corso
int generaInCorso(int inCorso){
    int max = 2;
    inCorso = rand() % max; //numero random che può dare come risultati solo 0 e 1
    return inCorso;
}

// Funzione che si occupa di generare casualmente i dati della somma pagata
float generaSommaPagata(float sommaPagata){
    sommaPagata = (float) rand() / 100; //numero random che può generare solo valori float positivi
    return sommaPagata;
}

// Funzione che si occupa di generare casualmente tutti i dati dello studente
RecordStudente generaStudente(){
    RecordStudente studente;
    generaNomeLista(studente.nome);
    generaCognomeLista(studente.cognome);
    generaCodiceFiscaleLista(studente.codiceFiscale);
    studente.titoloStudio = generaTitoloDiStudio(studente.titoloStudio);
    studente.dataNascita.mese = generaMese(studente.dataNascita.mese);
    studente.dataNascita.giorno = generaGiorno(studente.dataNascita.mese, studente.dataNascita.giorno);
    studente.dataNascita.anno = generaAnno(studente.dataNascita.anno);
    studente.edizione = generaEdizione(studente.edizione);
    studente.inCorso = generaInCorso(studente.inCorso);
    studente.sommaPagata = generaSommaPagata(studente.sommaPagata);
    messaggioLog("Generati i dati dello studente"); //inserimento del messaggio nel file di testo
    return studente;
}

// Funzione che si occupa di generare tutti i dati degli studenti
RecordStudente generaStudenti(int dim, RecordStudente elenco[]){
    int i;
    for (i = 0; i <dim ; i++) {
        elenco[i]=generaStudente(); //itera la funzione inserisciStudente per ogni cella iesima dell'elenco
    }
    messaggioLog("Generati i dati degli studenti nell'elenco"); //inserimento del messaggio nel file di testo
    return elenco[dim];
}
