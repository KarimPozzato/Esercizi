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
    
    for (int i = 0; i <= DIM2; i++)
    {
        printf("Inserire nome calciatore: ");
        scanf("%s", calciatori[i].nome);
        printf("Inserisci ruolo: ");
        scanf("%s", calciatori[i].ruolo);
        printf("Inserisci squadra: ");
        scanf("%s", calciatori[i].squadra);
        printf("\n");
    }

    printf("Giocatori che iniziano con la lettera 'c' \n");
    for(int i = 0; i < DIM2; i++)
    {
        if(calciatori[i].nome[0] == 'c')
            printf("%s\n", calciatori[i].nome);
    }

    printf("Giocatori che giocano nel milan");
    for(int i = 0; i < DIM2; i++)
    {
        if(calciatori[i].squadra == "milan")
            printf("%s\n", calciatori[i].nome);
    }
}
