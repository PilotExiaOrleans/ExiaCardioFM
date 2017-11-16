#include "actions.h"
#include "donnees.h"
#include <stdio.h>
#include <stdlib.h>

void ordreFichier()
{
    printf("\nAFFICHAGE PAR ORDRE DU FICHIER\n");
    FILE *monFichier = NULL;

    monFichier = ouvertureFichier("fichierFake.txt");
    chargementDesDonnees(monFichier);

 /*   printf("ON AFFICHE\n");
    int i = 0;
        for(i = 0; i < TAILLE_MAX; i++)
        {
            printf("%d\n",tableauDeDonnees[i].battement);
        }*/
}
