#include <stdio.h>
#include <limits.h>

void inserisci(int numeri[], int * puntatore)
{
    int n;

    do
    {
        printf("Inserisci un numero. Inserire -1 per terminare");
        scanf("%d", & n);
        numeri[*puntatore] = n;
        (*puntatore)++;
    } while (n != -1); 
}

void stampa(int numeri[], int ***puntatore)
{ 
    int i;
    
    for(i = 0; i < (***puntatore); i++)
    {
        printf("Il valore è: %d \n", numeri[i]);
    }

    menu(numeri, &puntatore);
}

void coda(int numeri[], int ***puntatore)
{
    int nuovo;
    int posizione;

    printf("inserire un numero da aggiungere");
	scanf("%d", &nuovo);
	posizione = (***puntatore)++;
	numeri[posizione] = nuovo;
	printf("Valore inserito in posizione: %d", posizione);

    menu(numeri, &puntatore);
}

int ricerca(int numeri[], int ***puntatore)
{
    int numero, i;
    int posizione = -1;

    printf("\n");
	printf("inserisci il numero: ");
	scanf("%d", &numero);

	for (i = 0; i < (***puntatore); i++)
	{
		if (numeri[i] == numero)
		{
			printf("il numero ricercato si trova in posizione: %d\n", i);
			posizione = i;
            printf("\n");
		}
	}

	return posizione;

    menu(numeri, &puntatore); 
}

void modifica(int numeri[], int ***puntatore)
{
    int nuovo_valore;
	int posizione = ricerca(numeri, &(*puntatore));
	if (posizione > 0)
	{
        printf("\n");
		printf("Inserisci il nuovo valore: ");
		scanf("%d", &nuovo_valore);
		numeri[posizione] = nuovo_valore;
		printf("valore modificato");
        printf("\n");
	}
	else
	{
		printf("Il valore non esiste.");
        printf("\n");
	}

    menu(numeri, &puntatore);
}

void inverso(int numeri[], int ***puntatore)
{
	int i;
	(***puntatore)--;

	for (i = ***puntatore; i >= 0; i--)
    {
       printf("Valore: %d \n", numeri[i]); 
    }

    menu(numeri, &puntatore);
}

void selezione(int a, int numeri[], int **puntatore)
{
    if(a == 1)
        stampa(numeri, &puntatore);
    if(a ==2)
        coda(numeri, &puntatore);
    if(a == 3)
        modifica(numeri, &puntatore);
    if(a == 5)
        ricerca(numeri, &puntatore);
    if(a == 7)
        inverso(numeri, &puntatore);
}

void menu(int numeri[], int *puntatore)
{
    int scelta;

    printf("\n");
    printf("premere 1 per mostrare il contenuto dell'array\n");
    printf("premere 2 per inserire un elemento in coda\n");
    printf("premere 3 per modificare un elemento\n");
    //printf("premere 4 per eliminare un elemento\n");
    printf("premere 5 per ricercare un elemento\n");
    //printf("premere 6 per inserire un elemento in una certa posizione\n");
    printf("premere 7 per mostrare il contenuto dell'array all'inverso\n");

    scanf("%d", &scelta);
    
    selezione(scelta, numeri, &puntatore);
}

int main(int argc, char * argv[])
{
    int numeri[SHRT_MAX];
    int puntatore, scelta = 1;
    
    inserisci(numeri, &puntatore);
    menu(numeri, &puntatore);

    return 0;
}