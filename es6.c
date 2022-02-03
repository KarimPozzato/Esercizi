#include <stdio.h>

int main (int argc, char * argv[])
{
    int a, b, c;
    int somma = 0;
    int contatore = 0;
    double media;

    do
    {
        printf("Inserisci A\n");
        scanf("%d", & a);
        printf("Inserisci B\n");
        scanf("%d", & b);
    } while (b < a);

    do
    {
        printf("Inserisci terzo numero: C\n");
        scanf("%d", & c);

        if (a <= c && b <= c)
        {
            somma = somma + c;
            contatore++;
        }

    } while (a <= c && b <= c);
    
    media = (double)somma / (double)contatore;
    printf("La media è: %f\n", media);

    return 0;

}