#include "libreria.h"

// Procedura che serve per raccogliere ed eliminare il buffer di input
void svuotaBuffer(){
    int c;
    do {
        c = getchar();
    }while(c != '\n');
}

// Funzione per scrivere un messaggio di log in un file
void messaggioLog(char *message){
    FILE *file = fopen("log.txt", "a"); //apertura del file in modalità "append"

    time_t now = time(NULL); //inizializzazione del tempo in "epoch time"
    struct tm *dataOra = localtime(&now); //creazione della struttura per la data e l'ora locali
    char stringa[20]; //inizializzazione della stringa che conterrà data e ora esatta
    strftime(stringa, sizeof(stringa), "%Y-%m-%d %H:%M:%S", dataOra); //inserimento della data e dell'ora esatta nella stringa

    fprintf(file, "[%s] %s\n", stringa, message); //stampa della data e ora esatta seguite dal messaggio scritto come input nella funzione
    fclose(file); //chiusura del file
}