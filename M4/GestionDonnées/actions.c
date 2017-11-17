#include "actions.h"
#include "donnees.h"
#include <stdio.h>
#include <stdlib.h>

void ordreFichier()
{
    printf("\nAFFICHAGE PAR ORDRE DU FICHIER\n");
    mesDonnees tableau[620];
    chargementDesDonnees(tableau);

    printf("ON AFFICHE\n");
    int i = 0;
    for (i = 0; i<TAILLE_TABLEAU;i++)
    {
        printf("%d;%d\n",tableau[i].id,tableau[i].battement);
    }
}

void ordreCroissant()
{
    mesDonnees tableau[TAILLE_TABLEAU];
    chargementDesDonnees(tableau);

    int i;
    int tableauTampon[TAILLE_TABLEAU];
    for (i = 0; i < TAILLE_TABLEAU; i++)
    {
    tableauTampon[i] = tableau[i].battement;
    }
   /* for(i=0;i<TAILLE_TABLEAU;i++){printf("%d\n",tableauTampon[i]);}*/

    tri_fusion_2(tableauTampon,TAILLE_TABLEAU);
    for (i = 0; i < TAILLE_TABLEAU; i++)
    {
        printf("%d\n", tableauTampon[i]);
    }
}

void ordreDecroissant()
{
    mesDonnees tableau[TAILLE_TABLEAU];
    chargementDesDonnees(tableau);

    int i;
    int tableauTampon[TAILLE_TABLEAU];
    for (i = 0; i < TAILLE_TABLEAU; i++)
    {
    tableauTampon[i] = tableau[i].battement;
    }
    tri_fusion_2(tableauTampon,TAILLE_TABLEAU);
    for (i = TAILLE_TABLEAU; i > 0; i--)
    {
        printf("%d\n", tableauTampon[i]);
    }
}
void rechercheTemps()
{
    mesDonnees tableau[600];
    chargementDesDonnees(tableau);

    int i=0,seconde = 0;
    int temps;
    printf("Votre temps: ");
    scanf("%d",&temps); getchar();
    temps = (float)temps;

        printf("%d;%d;%f",tableau[i].id,tableau[i].battement,tableau[i].temps);
}
void moyenne()
{
    mesDonnees tableau[620];
    chargementDesDonnees(tableau);

    int somme = 0;
    int i = 0;
        for(i = 0; i<TAILLE_TABLEAU;i++)
        {
            somme += tableau[i].battement;
        }
    printf("Moyenne: %d\n",somme/200);
}
void nombreDeDonnees()
{
    printf("Nombre de donnees: %d",TAILLE_TABLEAU);
}
void extremum()
{
    mesDonnees tableau[620];
    chargementDesDonnees(tableau);

    int min = 57, max = 58;
    int i = 0;
    for (i = 0; i<TAILLE_TABLEAU;i++)
    {
        if (tableau[i].battement > max)
        {
            max = tableau[i].battement;
        }
        else if (tableau[i].battement < min)
        {
            min = tableau[i].battement;
        }
    }
    printf("Minimum: %d\tMaximum: %d",min,max);
}




/*SECTION TRI FUSION*/
void fusion(int *t, int debut1, int milieu, int fin2)
{
    int *tableau1;
    int debut2 = milieu +1;
    int compteur_1 = debut1;
    int compteur_2 = debut2;
    int i;

    tableau1 = (int *)malloc((milieu-debut1+1)*sizeof(int));
    for (i=debut1; i<=milieu;i++)
    {
        tableau1[i-debut1]=t[i];
    }
    for (i=debut1; i<=fin2;i++)
    {
        if (compteur_1 == debut2)
        {break;}
        else if (compteur_2 == (fin2+1))
        {
            t[i] = tableau1[compteur_1-debut1];
            compteur_1++;
        }
        else if (tableau1[compteur_1-debut1]<t[compteur_2])
        {
            t[i] = tableau1[compteur_1-debut1];
            compteur_1++;
        }
        else
        {
            t[i] =t[compteur_2];
            compteur_2++;
        }
    }
    free(tableau1);
}
void tri_fusion(int *t, int debut, int fin)
{
    if (debut!=fin)
    {
        int milieu = (fin+debut)/2;
        tri_fusion(t,debut,milieu);
        tri_fusion(t,milieu+1,fin);
        fusion(t,debut,milieu,fin);
    }
}
void tri_fusion_2(int *t, int n)
{
    tri_fusion(t,0,n-1);
}

