#include "donnees.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void chargementDesDonnees(FILE* monFichier)
{
    struct mesDonnees tableauDeDonnees[TAILLE_TABLEAU];
    char tab[TAILLE_TABLEAU];
    unsigned int i = 0;
    int id,poul;
    float temps;

    while (fgets(tab, TAILLE_MAX, monFichier) != NULL)
    {
            sscanf(tab,"%d;%d;%f",&id,&poul,&temps);

       tableauDeDonnees[i].id = id;
       tableauDeDonnees[i].battement = poul;
       tableauDeDonnees[i].temps = temps;
    i++;
    }

}

FILE* ouvertureFichier(char *nomDuFichier)
{
    FILE* monFichier = NULL;
    monFichier = fopen(nomDuFichier,"r+");

        if (monFichier != NULL)
        {
            printf("OUVERTURE OK\n");
        }
        else
        {
            printf("ERREUR OUVERTURE\n");
            exit(EXIT_FAILURE);
        }

    return monFichier;
}
