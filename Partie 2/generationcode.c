#include <stdlib.h>
#include <stdio.h>
#include "menu.h"
void generationcode()
{
    switch(menu())
    {
        int choix2;
        FILE* fichier1= NULL;
        FILE* fichier2= NULL;
        FILE* fichier3= NULL;
        FILE* fichier40= NULL;
        FILE* fichier41= NULL;
        FILE* fichier42= NULL;
        FILE* fichier43= NULL;
        FILE* fichier44= NULL;
        FILE* fichier45= NULL;
        FILE* fichier46= NULL;
        FILE* fichier47= NULL;
        FILE* fichier48= NULL;
        FILE* fichier49= NULL;
        FILE* fichier5= NULL;


            case 1: /*CAS_1*/
            printf(" Votre choix est 1 - Toutes les LED au rythme de votre coeur\n");
            fichier1=fopen("C:\\Users\\axel\\Desktop\\PROJET_CODE_ARNUINO.ino","r+");fichier1;

            if (fichier1 != NULL)
                {
                    printf("ouverture du fichier \n");
                    system("start param.h/param.h.ino");
                    Sleep(7000);
                    keybd_event(VK_CONTROL,0,0,0);
                    keybd_event('U',0,0,0);
                    keybd_event(VK_CONTROL,0,KEYEVENTF_KEYUP,0);
                }
            else
                {
                    printf("Impossible d'ouvrir le fichier \n");
                }


             fclose(fichier1);

                break;

            case 2: /*CAS_2*/
                printf("Votre choix est 2 - Une LED sur deux au rythme de votre coeur\n");
                fichier2=fopen("C:\\Users\\axel\\Desktop\\PROJET_CODE_ARNUINO.ino","r+");fichier2;

               if (fichier2 != NULL)
               {
                        printf("ouverture du fichier \n");
               }
               else
               {
                        printf("Impossible d'ouvrir le fichier \n");
               }

               fclose(fichier2) ;
                    break;

            case 3:/*CAS_3*/
                printf("Votre choix est 3 - Une LED sur trois au rythme de votre coeur\n");
                fichier3=fopen("C:\\Users\\axel\\Desktop\\PROJET_CODE_ARNUINO.ino","r+");fichier3;

               if (fichier3 != NULL)
               {
                        printf("ouverture du fichier \n");
               }
               else
               {
                        printf("Impossible d'ouvrir le fichier \n");
               }

               fclose(fichier3) ;
                    break;

            case 4: /*CAS_4*/
                printf("Votre choix est 4 - Une seule LED au choix au rythme de votre coeur\n");

                    printf("Veuillez choisir la Led entre 1 est 10 que vous voulez faire clignoter\n");
                    scanf("%d",&choix2);

                    switch(choix2) /*NOUVEAU SWITCH*/
                    {
                       case 1: /*CAS_1_BIS*/
                            printf("Votre choix de Led est la numéro 1");
                            fichier40=fopen("C:\\Users\\axel\\Desktop\\PROJET_CODE_ARNUINO.ino","r+");fichier40;

                                if (fichier40 != NULL)
                                    {
                                        printf("ouverture du fichier \n");
                                    }
                                else
                                    {
                                        printf("Impossible d'ouvrir le fichier \n");
                                    }

                         fclose(fichier40);
                         break;

                       case 2: /*CAS_2_BIS*/
                            printf("Votre choix de Led est la numéro 2");
                            fichier41=fopen("C:\\Users\\axel\\Desktop\\PROJET_CODE_ARNUINO.ino","r+");fichier41;

                                if (fichier41 != NULL)
                                    {
                                        printf("ouverture du fichier \n");
                                    }
                                else
                                    {
                                        printf("Impossible d'ouvrir le fichier \n");
                                    }

                         fclose(fichier41);
                         break;

                       case 3: /*CAS_3_BIS*/
                            printf("Votre choix de Led est la numéro 3");
                            fichier42=fopen("C:\\Users\\axel\\Desktop\\PROJET_CODE_ARNUINO.ino","r+");fichier42;
                                if (fichier42 != NULL)
                                    {
                                        printf("ouverture du fichier \n");
                                    }
                                else
                                    {
                                        printf("Impossible d'ouvrir le fichier \n");
                                    }

                         fclose(fichier42) ;
                         break;

                       case 4: /*CAS_4_BIS*/
                            printf("Votre choix de Led est la numéro 4");
                            fichier43=fopen("C:\\Users\\axel\\Desktop\\PROJET_CODE_ARNUINO.ino","r+");fichier43;

                                if (fichier43 != NULL)
                                    {
                                        printf("ouverture du fichier \n");
                                    }
                                else
                                    {
                                        printf("Impossible d'ouvrir le fichier \n");
                                    }

                         fclose(fichier43);
                         break;

                       case 5: /*CAS_5_BIS*/
                            printf("Votre choix de Led est la numéro 5");
                            fichier44=fopen("C:\\Users\\axel\\Desktop\\PROJET_CODE_ARNUINO.ino","r+");fichier44;
                                if (fichier44 != NULL)
                                    {
                                        printf("ouverture du fichier \n");
                                    }
                                else
                                    {
                                        printf("Impossible d'ouvrir le fichier \n");
                                    }

                         fclose(fichier44) ;
                         break;

                       case 6: /*CAS_6_BIS*/
                            printf("Votre choix de Led est la numéro 6");
                            fichier45=fopen("C:\\Users\\axel\\Desktop\\PROJET_CODE_ARNUINO.ino","r+");fichier45;
                                if (fichier45 != NULL)
                                    {
                                        printf("ouverture du fichier \n");
                                    }
                                else
                                    {
                                        printf("Impossible d'ouvrir le fichier \n");
                                    }

                         fclose(fichier45);
                         break;

                       case 7: /*CAS_7_BIS*/
                            printf("Votre choix de Led est la numéro 7");
                            fichier46=fopen("C:\\Users\\axel\\Desktop\\PROJET_CODE_ARNUINO.ino","r+");fichier46;
                                if (fichier46 != NULL)
                                    {
                                        printf("ouverture du fichier \n");
                                    }
                                else
                                    {
                                        printf("Impossible d'ouvrir le fichier \n");
                                    }

                         fclose(fichier46) ;
                         break;

                       case 8: /*CAS_8_BIS*/
                            printf("Votre choix de Led est la numéro 8");
                            fichier47=fopen("C:\\Users\\axel\\Desktop\\PROJET_CODE_ARNUINO.ino","r+");fichier47;
                                if (fichier47 != NULL)
                                    {
                                        printf("ouverture du fichier \n");
                                    }
                                else
                                    {
                                        printf("Impossible d'ouvrir le fichier \n");
                                    }

                         fclose(fichier47) ;
                         break;

                       case 9: /*CAS_9_BIS*/
                            printf("Votre choix de Led est la numéro 9");
                            fichier48=fopen("C:\\Users\\axel\\Desktop\\PROJET_CODE_ARNUINO.ino","r+");fichier48;
                                if (fichier48 != NULL)
                                    {
                                        printf("ouverture du fichier \n");
                                    }
                                else
                                    {
                                        printf("Impossible d'ouvrir le fichier \n");
                                    }

                         fclose(fichier48) ;
                         break;

                       case 10: /*CAS_10_BIS*/
                            printf("Votre choix de Led est la numéro 10");
                            fichier49=fopen("C:\\Users\\axel\\Desktop\\PROJET_CODE_ARNUINO.ino","r+");fichier49;
                                if (fichier49 != NULL)
                                    {
                                        printf("ouverture du fichier \n");
                                    }
                                else
                                    {
                                        printf("Impossible d'ouvrir le fichier \n");
                                    }

                         fclose(fichier49) ;
                         break;

                       default:
                           printf("ERREUR");
                        break;
                    }
            case 5: /*CAS_5*/
                    printf("5 - Une chenille de LED au rythme de votre coeur\n");
                    fichier5=fopen("C:\\Users\\axel\\Desktop\\PROJET_CODE_ARNUINO.ino","r+");fichier5;
                            if (fichier5 != NULL)
                                    {
                                        printf("ouverture du fichier \n");
                                    }
                            else
                                    {
                                        printf("Impossible d'ouvrir le fichier \n");
                                    }

                         fclose(fichier5) ;
                         break;


                       default:
                           printf("ERREUR");
                        break;
    }
}
