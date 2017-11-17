#ifndef ACTIONS_H_INCLUDED
#define ACTIONS_H_INCLUDED

#define TAILLE_MAX_LIGNE
#define TAILLE_TABLEAU 200


void ordreFichier();
void ordreCroissant();
void ordreDecroissant();
void rechercheTemps();
void moyenne();
void nombreDeDonnees();
void extremum();

/*TRI FUSION*/
void fusion(int *t, int debut1, int fin1, int fin2);
void tri_fusion(int *t, int debut, int fin);
void tri_fusion_2(int *t, int n);

#endif // ACTIONS_H_INCLUDED
