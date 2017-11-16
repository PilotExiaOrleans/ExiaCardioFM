#include <stdio.h>
#include <stdlib.h>
#include "menu.c"
#include "actions.c"
#include "donnees.c"


int main()
{
    FILE *monFichier = NULL;

    monFichier = ouvertureFichier("fichierFake.txt");
    chargementDesDonnees(monFichier);

    choixDuMenu();
    return 0;
}
