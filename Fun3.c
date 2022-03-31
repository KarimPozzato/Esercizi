#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define DIM 4

int ricerca(int argc, char argv[], char numero, int indice)
{
    int i;

    for(i = 0; i < argc; i++)
    {
        if(strcmp(argv[i], numero) == 0)
        {
            indice = i;
            return 1;
        }

        if(strcmp(argv[i], numero) != 0)
        {
            return -1;
        }
    }
}

int main(int argc, char *argv[])
{
    int indice;
    char numero[DIM];

    if (argc < 2)
    {
        printf("Inserire dei numeri\n");
        return -1;
    }

    printf("Inserisci un numero da cercare\n");
    scanf("%s", numero);

    if(ricerca(argc, argv, numero, indice) == -1)
    {
        printf("Numero non presente\n");
    }

    if(ricerca(argc, argv, numero, indice) == 1)
    {
        printf("Numero presente in posizione %d \n", indice);
    }

    return 0;
}