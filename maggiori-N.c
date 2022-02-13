#include <stdio.h>

int main (int argc, char * argv[])
{
    int conta;
    int n;

    do
    {
        printf("Inserisci N >= 0");
        scanf("%d", &n);
    } while (n <  0);

    do
    {
        printf("N vale %d\n", conta);
        conta = conta +1;
    } while (conta <= n);

    return 0;
    
}
