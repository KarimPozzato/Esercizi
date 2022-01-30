#include <stdio.h>

int main(int argc, char *argv[])
{
    int a, b;
    int r;
    int somma = 0;

    do
    {
        printf("inserisci valore a\n");
        scanf("%d", &a);
        printf("inserisci valore b\n");
        scanf("%d", &b);
        r = a * b;
        printf("prodotto: %d\n", r);
        somma = somma + r;
    } while (a != 0 && b != 0);

    printf ("somma: %d\n", somma);
}