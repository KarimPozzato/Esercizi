/*Si scriva un programma in C che legge in input da argv[1] un carattere, quindi istanzi un processo figlio
il quale deve convertire il carattere in maiuscolo e terminare. Il padre attende la terminazione del processo figlio.*/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <sys/fcntl.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
    int pid;
    pid = fork(); // istanzazione processo figlio.

    if (pid == 0) // discriminazzione del padre, entriamo nel figlio.
    {
        printf("Il caerattere maiuscolo e': %c \n", toupper(argv[1][0]));
        exit(0);
    }
    else
    {
        wait(&pid);
    }

    printf("Mio figlio ha terminato\n");

    return 0;
}

//Andremmo a scrivere ./a.out + il carattere che vogliamo.