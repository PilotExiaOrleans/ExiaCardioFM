#include "menu.h"

#include <stdlib.h>
#include <stdio.h>

int choixDuMenu()
{
    int choix;

    affichage();
    scanf("%d",&choix);

    switch(choix)
    {
    case 1: ordreFichier();
        break;
/*    case 2:
        break;
    case 3:
        break;
    case 4:
        break;
    case 5:
        break;
    case 6:
        break;
    case 7:
        break;*/
    default:
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
    printf("4- Moyenne\n");
    printf("5- Afficher le nombre de donnees\n");
    printf("6- afficher les extremums\n");
    printf("7- Quitter\n");
    printf("Votre choix ? ");
}
