#include <stdio.h>
#define Dim 4

int main(int argc, char * argv[])
{
    int numeri[Dim];
    int i;

    for(i = 0; i < Dim; i++)
    {
        printf("Inserisci 4 numeri\n");
        scanf("%d" , & numeri[i]);
    }

    printf("\n");
    printf("I numeri inseriti sono:\n");

    for(i = 0; i < Dim; i++)
    {
        printf("%d \n", numeri[i]);
    }
    
    return 0;
}