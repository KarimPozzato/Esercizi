#include <stdio.h>
#include <math.h>

main (int argc, char * argv[])
{
    int a = 0;
    double somma;

    while (a > 0)
    {
        printf("Inserisci un numero A\n");
        scanf("%d", & a);

        if (a > 0)
            somma = somma + sqrt(a);

        else
            printf ("Il numero inserito non va bene");
    }

    printf ("La somma è: %f\n", somma);

    return 0;
}