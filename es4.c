#include <stdio.h>
#include <math.h>   //aggiungiamo la libreria math

int main (int argc, char * argv [])
{
    int a,b;
    double r;

    do
    {
        printf("Inserire il valore di A\n");
        scanf("%d", & a);
        printf("Inserisci il valore di B\n");
        scanf("%d", & b);

        if (a < b)  //guardiamo il rapposto per scoprire il maggiore e il minore.
            r = (double) b / (double) a;

        else
            r = (double) a / (double) b;

        if (r > 0)
        {
            r = sqrt(r);    //calcolo radice quadrata.
            printf("In valore della radice è: %f\n", r);
        }

    }while(r > 0);

    return 0;
}