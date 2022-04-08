#include <stdio.h>
#include <limits.h>

void inserisci(int numeri[], int * puntatore)
{
    int n;

    do
    {
        printf("Inserisci un numero. Inresici -1 per terminare.\n");
        scanf("%d", & n);

        numeri[*puntatore] = n;
        (*puntatore)++;

    } while (n != -1);
    
}

void stampa(int numeri[], int * puntatore)
{
    for(int i = 0; i < (*puntatore); i++)
    {
        printf("Il valore è: %d \n", numeri[i]);
    }
}

void coda(int numeri[], int * puntatore)
{
    int nuovo;
    int posizione;
    
    printf("Inserire il numero che si voule aggiungere: \n");
    scanf();
}

/*void menu(int numeri[], int * puntatore)
{
    int scelta;

    printf("\n");
    printf("Inserire 1 per visualizzare il contenuto \n");

    scanf("%d", & scelta);
}*/

void menu(int numeri[], int * puntatore, int scelta)
{
    printf("\n");
    printf("Inserire 1 per visualizzare il contenuto \n");
    printf("Inserire 2 per inserire un numero in coda\n");
    printf("Inserire 7 per visualizzare il contenuto all'incontrario \n");
    scanf("%d", & scelta);
    printf("\n");

    if (scelta == 1)
    {
        printf("I numeri inseriti sono: \n");
        stampa(numeri, & puntatore);
    }
    else if (scelta == 7)
    {
        printf("I numeri inseriti all'incontrario sono: \n");
        inverso(numeri, & puntatore);
    }
}

int main(int argc, char * argv[])
{
    int numeri[SHRT_MAX];
    int puntatore;
    int scelta; 

    inserisci(numeri, & puntatore);

    /*printf("Inserire 1 per visualizzare il contenuto \n");
    scanf("%d", & scelta);*/

    //while (scelta != 0)
    //{
        //menu(numeri, &puntatore);
        /*printf("\n");
		    printf("premi 0 per uscire oppure 1 per continuare \n");
		    scanf("%d", &scelta);*/
    //}

    /*printf("\n");
    printf("Inserire 1 per visualizzare il contenuto \n");
    printf("Inserire 2 per inserire un numero in coda\n");
    printf("Inserire 7 per visualizzare il contenuto all'incontrario \n");
    scanf("%d", & scelta);
    printf("\n");

    if (scelta = 1)
    {
        printf("I numeri inseriti sono: \n");
        stampa(numeri, & puntatore);
    }
    else if (scelta = 7)
    {
        printf("I numeri inseriti all'incontrario sono: \n");
        inverso(numeri, & puntatore);
    }*/
    
    //stampa(numeri, & puntatore);

    return 0;
}