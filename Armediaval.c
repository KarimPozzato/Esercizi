#include <stdio.h>
#define Dim 10

int main (int argc, char argv[])
{
    int n, sommaN = 0, div = 0;
    int contenitore[Dim];
    double media;

    do
    {
        printf("Inserire dei numeri\n");
        scanf("%d \n", & n);

        sommaN = sommaN + n;
        contenitore[div] = n;
        div++;
        
    } while (n != 0 && div < Dim);

    media = sommaN / div;
    printf("La media dei numeri è: %f\n", media);

    for(int k = div; k > 0; k--)
    {
        if (contenitore[k] > media)
            printf("Il valore %d è maggiore della media %f\n", contenitore[k], media);
    }

    return 0;
}