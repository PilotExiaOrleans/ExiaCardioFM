#include "menu.h"

#include <stdlib.h>
#include <stdio.h>

int choixDuMenu()
{
    int choix;

    affichage();
    scanf("%d",&choix);
    getchar();

    switch(choix)
    {
    case 1: ordreFichier();
        break;
    case 2:ordreCroissant();
        break;
    case 3:ordreDecroissant();
        break;
    case 4:rechercheTemps();
        break;
    case 5:moyenne();
        break;
    case 6:nombreDeDonnees();
        break;
    case 7:extremum();
        break;
    case 8:
        printf("A bientot");
        break;
    default: exit(EXIT_FAILURE);
        break;
    }

    return choix;
}

void affichage()
{
    printf("\t\tMENU DE TRAITEMENT DES DONNEES\n\n");
    printf("1- Afficher dans l'ordre du fichier\n");
    printf("2- Ordre croissant\n");
    printf("3- Ordre decroissant\n");
    printf("4- Afficher pour un temps particulier\n");
    printf("5- Moyenne\n");
    printf("6- Afficher le nombre de donnees\n");
    printf("7- Afficher les extremums\n");
    printf("8- Quitter\n");
    printf("Votre choix ? ");
}
