#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define DIM 100

int main(int argc, char * argv[])
{
    int p1p0[2];
    int conta = 0; 
    char parola[DIM];
    int pid = fork();
    char array[DIM];

    pipe(p1p0);

    printf("Inserire la parola da ricercare \n");
    scanf("%s", parola);

    if(pid == 0)
    {
        close(p1p0[0]);
        close(1);
        dup(p1p0[1]);
        close(p1p0[1]);
        
        execl("/usr/bin/grep", "grep", "-c", parola, argv[1], (char *)0);
        return -1;
    }

    read(p1p0[0], array, sizeof(array));
    printf("Il file ha %d %s \n", atoi(array), parola);
    return 0;
}