#include <stdio.h>
#define Dim 5

int main(int argc, char * argv[])
{
    int numeri[Dim];
    int i;

    for(i = 0; i < Dim; i++)
    {
        printf("Inserisci 5 numeri\n");
        scanf("%d" , & numeri[i]);
    }

    printf("\n");
    printf("I numeri inseriti sono:\n");

    for(i = 0; i < Dim; i++)
    {
        printf("%d \n", numeri[i]);
    }

    printf("\n");
    printf("I numeri al contrario sono:\n");

    for(i = Dim; i > 0; i--)
    {
        printf("%d \n", numeri[i]);
    }
    
    return 0;
}