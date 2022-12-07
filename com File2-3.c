#include <stdio.h>
#include <string.h>
#include <stdlib.h> //per exit 1
#define MAX 100

void comuni(char *argv[], FILE *f1, FILE *f2, FILE *f3)
{
    char P[MAX], S[MAX]; //due stringhe
    int cont = 0; //contatore
    int trovato = 0; //flag

    f1 = fopen(argv[1], "r");
    f2 = fopen(argv[2], "r");
    f3 = fopen("risultati.txt", "w");

    while (!feof(f1))
    {
        fscanf(f1, "%s", S); //memoriziamo il primo file in s
        rewind(f2); //mi riposta il puntatore del file all'inizzio del file. Questo perche il secondo file mi rimaneva fissato nell'ultima stringha.
        trovato = 0;
        while (!feof(f2))
        {
            fscanf(f2, "%s", P); //leggiamo il secondo file 
            if ((strcmp(S, P) == 0) && !trovato) //confronti la stringa memorizzata se è presente nei due file 
            {
                cont++;
                printf("\nHo trovato \"%s\"!\n", P);
                trovato = 1;
            }
        }
    }
    printf("Le stringhe ripetute sono: %d", cont);
    fprintf(f3, "%d", cont);
    fclose(f1);
    fclose(f2);
    fclose(f3);
}

int main(int argc, char *argv[])
{
    FILE *f1, *f2, *f3;
    if (argc == 3)
        comuni(argv, f1, f2, f3);
    else
    {
        printf("Argomenti errati. Inserire i nomi dei file\n ");
        exit(1);
    }
    return 0;
}

/*#include <stdio.h>
#include <string.h>
#define MAX 100

void comuni(FILE *f1, FILE *f2, FILE *f3)
{
    char P[MAX], S[MAX];
    int trovato = 0, cont = 0;
    f1 = fopen("f1.txt", "r");
    f2 = fopen("f2.txt", "r");
    f3 = fopen("risultati.txt", "w");
    while (!feof(f1))
    {
        fscanf(f1, "%s", S);
        rewind(f2);
        trovato = 0;
        while (!feof(f2))
        {
            fscanf(f2, "%s", P);
            if ((strcmp(S, P) == 0) && !trovato)
            {
                cont++;
                printf("\nHo trovato \"%s\"!\n", P);
                trovato = 1;
            }
        }
    }
    printf("Le stringhe ripetute sono: %d", cont);
    fprintf(f3, "%d", cont);
    fclose(f1);
    fclose(f2);
    fclose(f3);
}

int main()
{
    FILE *f1, *f2, *f3;
    comuni(f1, f2, f3);
    return 0;
}*/
