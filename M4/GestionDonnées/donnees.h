#ifndef DONNEES_H_INCLUDED
#define DONNEES_H_INCLUDED

#define TAILLE_MAX 17
#define TAILLE_TABLEAU 620

typedef struct mesDonnees
{
  int id;
  int battement;
  float temps;
}mesDonnees;

FILE* ouvertureFichier(char *nomDuFichier);
void chargementDesDonnees(FILE* monFichier);

#endif // DONNEES_H_INCLUDED
