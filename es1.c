#include <stdio.h>

int n1;
int n2;
double n3;

int main()
{
    do
        {
            printf("Inserisci numero\n");
            scanf("%d", & n1);
            printf("Inserisci secondo numero\n");
            scanf("%d", & n2);

            if (n1>n2)
                r = (double)n2 / (double)n1;

            else
                r = (double)n1 / (double)n2;

            printf("Risultato %f\n")

        }while (n1 != 0, n2 != 0)

    return 0;
}