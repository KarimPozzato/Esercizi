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

int somma_media(int numeri[], int ***puntatore)
{
    int somma = 0;
    int media = 0;

    for(int i = 0; i < (***puntatore); i++)
    {
        somma = somma + numeri[i]; //puntatore[i];
    }

    media = somma/(***puntatore);

    return somma;
    return media;

    menu(numeri, &puntatore);
}

int main(int argc, char * argv[])
{
    int numeri[SHRT_MAX];
    int puntatore, scelta = 1;
    int scelta;
    int a;

    inserisci(numeri, &puntatore);

    printf("\n");
    printf("premere 1 per mostrare il contenuto dell'array\n");
    printf("premere 2 per mostrare il contenuto dell'array all'inverso\n");
    printf("premere 3 per fare la somma e la media dell'array");
    //printf("premere 4 per eliminare un elemento\n");
    printf("premere 6 per ricercare un elemento\n");
    
    scanf("%d", &scelta);

    if(a == 1)
        stampa(numeri, &puntatore);
    if(a == 6)
        ricerca(numeri, &puntatore);
    if(a == 2)
        inverso(numeri, &puntatore);

    return 0;
}