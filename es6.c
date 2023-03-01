#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>
#define DIM 100

// 1/3/2023

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Numero sbagliato di argomenti");
    }

    int pid;
    int p1p0[1];
    int p2p0[2];
    char buffer[1];
    char contenitore[DIM];

    pid = fork();
    pipe(p1p0);

    if (pid == 0)
    {
        // scriviamo nella pipe il contenuto del file
        close(p1p0[0]);
        close(1);
        dup(p1p0[1]);
        close(p1p0[1]);
        execl("//bin/cat", "cat", argv[1], NULL);
        return -1;
    }

    pid = fork();
    pipe(p2p0);

    if (pid == 0)
    {
        // Leggiamo dalla pipe il suo contenuto
        close(p1p0[1]);
        close(0);
        dup(p1p0[0]);
        close(p1p0[0]);
        
        //E lo scriviamo nella nuova pipe
        close(p2p0[0]);
        close(1);
        dup(p2p0[1]);
        close(p2p0[1]);
        execl("//bin/awk", "awk", "{print $3}", NULL);

        return -1;
    }

    close(p1p0[0]);
    close(p1p0[1]);
    close(p2p0[1]);

    strncat(contenitore, &buffer[0], sizeof(buffer[0]));

    return 0;

}