#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ANNO 4
#define MESE 2
#define GIORNO 2

int main(int argc, char * argv[])
{
    char Sgiorno[GIORNO];
    char Smese[MESE];
    char Sanno[ANNO];

    int giorno, mese, anno;

    printf("Inserie la data composta da 8 numeri gg/mm/aaaa\n");
    
    if(strlen(argv[1] != 8));
    {
        printf("La lunghezza della stringa non è composta da 8 numeri\n");
        return -1;
    }

    Sgiorno[0] = argv[1][0];
    Sgiorno[1] = argv[1][1];
    giorno = atoi(Sgiorno);

    if(giorno > 31 || giorno < 1)
    {
        printf("Data del giorno non valida\n");
        return -1;
    }

    Smese[0] = argv[1][2];
    Smese[1] = argv[1][3];
    mese = atoi(Smese);

    if(mese > 12 || mese < 1)
    {
        printf("Mese non valido");
        return-1;
    }

    Sanno[0] = argv[1][4];
    Sanno[1] = argv[1][5];
    Sanno[2] = argv[1][6];
    Sanno[3] = argv[1][7];
    anno = atoi(Sanno);

    if(anno > 2022)
    {
        printf("Anno non valido");
        return -1;
    }

    printf("%d/%d/%d \n", giorno, mese, anno);
}