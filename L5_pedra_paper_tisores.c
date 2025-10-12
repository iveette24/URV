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


#define PEDRA 1
#define PAPER 2
#define TISORES 3
#define MAX_PARTIDES 5


int main() {
    int victUser = 0, victPC = 0, ronda = 1;
    int user, pc;

    ini_llavor();

    while (ronda <= MAX_PARTIDES && victUser < 3 && victPC < 3) {
        printf("Ronda %d\n", ronda);
        printf("Tria: 1=Pedra, 2=Paper, 3=Tisores: ");
        scanf("%d", &user);

        pc = aleatori_entre(1,3);

        printf("PC ha triat: %d\n", pc);

        if (user == pc) {
            printf("Empat!\n");
        } else if ((user == PEDRA && pc == TISORES) ||
                   (user == PAPER && pc == PEDRA) ||
                   (user == TISORES && pc == PAPER)) {
            printf("Has guanyat la ronda!\n");
            victUser++;
        } else {
            printf("Has perdut la ronda!\n");
            victPC++;
        }
        ronda++;
    }

    if (victUser > victPC) {
        printf("Has guanyat la partida!\n");
    } else if (victUser < victPC) {
        printf("Has perdut la partida!\n");
    } else {
        printf("La partida ha acabat en empat.\n");
    }

    return 0;
}
