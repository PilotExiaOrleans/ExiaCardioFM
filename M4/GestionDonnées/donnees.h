#ifndef DONNEES_H_INCLUDED
#define DONNEES_H_INCLUDED

#define TAILLE_MAX_LIGNE 17
#define TAILLE_TABLEAU 200

typedef struct mesDonnees
{
  int id;
  int battement;
  float temps;
}mesDonnees;

FILE* ouvertureFichier(char *nomDuFichier);
void chargementDesDonnees(mesDonnees monTableau[]);




#endif // DONNEES_H_INCLUDED
