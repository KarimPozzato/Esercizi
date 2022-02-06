#include <stdio.h>

int main (int argc, char * argv[])
{
    int a , b, c;
    int min = 0, max = 0;

    do
    {
        printf("Inserisci A\n");
        scanf("%d", a);
        printf("Inserisci B\n");
        scanf("%d", b);
        printf("Inserisci C\n");
        scanf("%d", c);

        if (a < b  && b < c)
        {
            if (a < min)
                min = a;

            else 
                max = c;
        }

        else 
        printf("Terna non valida\n");

    } while (a > 0 && b > 0 && c > 0);

    printf ("massimo: %d\n", max);
    printf ("minimo: %d\n", min);

    return 0;
    
}