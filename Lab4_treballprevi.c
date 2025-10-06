#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main()
{
    int edat, edat_usuari;
    bool encertat = false;

    /* Inicialitzem la llavor amb l’hora actual */
    srand(time(NULL));
    edat = (rand() % 41) + 10;  /* Aleatori entre 10 i 50 */

    while (!encertat)
    {
        printf("Quina edat creus que tinc? ");
        scanf("%d", &edat_usuari);

        if (edat_usuari == edat)
        {
            printf("Correcte! Has encertat l'edat.\n");
            encertat = true;
        }
        else if (edat_usuari < edat)
        {
            printf("Soc mes gran.\n");
        }
        else
        {
            printf("Soc mes jove.\n");
        }
    }

    return 0;
}
