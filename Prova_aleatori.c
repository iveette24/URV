#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>        /* necessaria per tenir el tipus bool (boolepa) */
#include <time.h>


/**
 * El procediment inicialitza el generador d'aleatoris amb la data/hora actuals.
 * No te parametres
*/
void ini_llavor (void)
{

	srand(time(NULL));
}

/**
 * El procediment genera un enter aleatori entre 'min' i 'max'.
 * @param min (Valor (E): enter). El valor minim.
 * @param max (Valor (E): enter). El valor maxim.
 * @return enter, el valor aleatori.
*/
int aleatori_entre (int min, int max)
{
	return (min + (rand()%(max-min+1)));
}


int main ()
{
int num_aleat, i;

ini_llavor();

i=1;
while (i<=5)
{
    num_aleat=aleatori_entre(1,10);
    printf("num: %d\n", num_aleat); 
    i++;
}

return 0;
}
