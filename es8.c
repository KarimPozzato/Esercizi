#include <stdio.h>
#include <math.h>

main (int argc, char * argv[])
{
    int a, n, conta = 0;
    double somma;
    
    do
    {
        printf("Inserisci N\n");
        scanf ("%d", & n);
    } while (n <= 0);

    do
    {
        printf("Inserisci un numero A\n");
        scanf("%d", & a);
        conta++;

        if (a >= 0)
        {
            somma = somma + sqrt(a);
        }
        
        else
            printf ("Non è possibile fare la radice\n");
    }while (conta <= n && a >= 0);

    printf ("La somma è: %f\n", somma);

    return 0;
}
