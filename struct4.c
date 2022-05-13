#include <stdio.h>
#define DIM 20
#define DIM2 5

typedef struct
{
    char nome[DIM];
    char ruolo[DIM];
    char squadra[DIM];
} calciatore_T;

int main(int argc, char *argv[])
{
    calciatore_T calciatori[DIM2];
    calciatore_T calciatore;
    inserimento(calciatore, calciatori);
}

void inserimento(calciatore_T calciatore, calciatore_T calciatori[])
{
    for (int i = 0; i <= DIM2; i++)
    {
        printf("Inserire nome calciatore: ");
        scanf("%s\n", calciatori[i].nome);
        printf("Inserisci ruolo: ");
        scanf("%s\n", calciatori[i].ruolo);
        printf("Inserisci squadra: ");
        scanf("%s\n", calciatori[i].squadra);
    }
}