#include <stdlib.h>
#include <stdio.h>
#include "menu.h"

short menu()
{
    short choix;
    printf("Bienvenue, choissisez un des modes d'affichage pour votre fréquence cardiaque\n");
    printf("-----------------------------------------------------------------------------\n");
    printf("1 - Toutes les LED au rythme de votre coeur\n");
    printf("2 - Une LED sur deux au rythme de votre coeur\n");
    printf("3 - Une LED sur trois au rythme de votre coeur\n");
    printf("4 - Une seule LED au choix au rythme de votre coeur\n");
    printf("5 - Une chenille de LED au rythme de votre coeur\n");
    printf("-----------------------------------------------------------------------------\n");
    printf("Votre choix : ");
    scanf("%d", &choix);

    return choix;
}
