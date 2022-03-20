#include <stdio.h>
#include <string.h>
#define dim 8

int main(int argc, char *argv[])
{

    char data[dim]; 
    int conta = 0, datai, gg, mm, aaaa;

    for(int i = 0; i < dim; i++)
    {
        data[conta] = argv[1][i];
        conta++;
    }

    datai = atoi(data);

    gg = datai / 1000000;
    mm = (datai / 10000) % 100;
    aaaa = datai % 10000;


    if(gg <= 31)
    {
        printf("%d \n", gg);

        if(mm <= 12)
            printf("%d\n", mm);

            if (aaaa <= 2022)
            printf("%d\n", aaaa);

    }

    else
    {
        printf("La data inserita non è valida \n");
    }

    return 0;
}