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

void menu(int numeri[], int * puntatore)
{
    int scelta;

    printf("\n");
    printf("Inserire 1 per visualizzare il contenuto \n");

    scanf("%d", & scelta);
}

int main(int argc, char * argv[])
{
    int numeri[SHRT_MAX];
    int puntatore;
    int scelta; 

    inserisci(numeri, & puntatore);

    while (scelta != 0)
    {
        menu(numeri, &puntatore);
        printf("\n");
		printf("premi 0 per uscire oppure 1 per continuare \n");
		scanf("%d", &scelta);
    }
    
    stampa(numeri, & puntatore);

    return 0;
}