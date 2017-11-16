#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
#include <time.h>
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
            fichier1=fopen("C:\\Users\\axel\\Desktop\\param.h\\param.h.ino","r+");fichier1;



            if (fichier1 != NULL)
                {
                    printf("ouverture du fichier \n");
                    keybd_event(VK_CONTROL,0,0,0);
                    keybd_event('A',0,0,0);
                    keybd_event(VK_DELETE,0,0,0);
                    Sleep(2000);
                    fputs("const short fDelay = 666;//==>90 BPM  \n \n \n void setup() \n { \n for(short i=2; i<12; i++) \n {\npinMode(i, OUTPUT);\n} \n } \n \n \n void loop()\n{\n short ledUpTime = 50;\n for(short i=2; i<12; i++)\n {\n digitalWrite(i-1, LOW);\n  digitalWrite(i, HIGH);\n delay(fDelay);\n if(i == 11)\n{\n digitalWrite(i, LOW);\n}\n}\n}",fichier1);
                    fclose(fichier1);
                    system("start C:\\Users\\axel\\Desktop\\param.h\\param.h.ino");
                    Sleep(6000);
                    keybd_event(VK_CONTROL,0,0,0);
                    keybd_event('U',0,0,0);
                    keybd_event(VK_CONTROL,0,KEYEVENTF_KEYUP,0);
                }

            else
                {
                    printf("Impossible d'ouvrir le fichier \n");
                }






                break;

            case 2: /*CAS_2*/
                printf("Votre choix est 2 - Une LED sur deux au rythme de votre coeur\n");
                fichier2=fopen("C:\\Users\\axel\\Desktop\\param.h\\param.h.ino","r+");fichier2;



            if (fichier2 != NULL)
                {
                    printf("ouverture du fichier \n");
                    keybd_event(VK_CONTROL,0,0,0);
                    keybd_event('A',0,0,0);
                    keybd_event(VK_DELETE,0,0,0);
                    Sleep(2000);
                    fputs("const short fDelay = 666;//==>90 BPM  \n \n \n void setup() \n { \n for(short i=2; i<12; i++) \n {\npinMode(i, OUTPUT);\n} \n } \n \n \n void loop()\n{\n short ledUpTime = 50;\n for(short i=2; i<12; i+=2)\n {\n if (i>=12) {i-=10;}\n digitalWrite(i, HIGH);\n delay(ledUpTime);\n digitalWrite(i, LOW);\n delay(fDelay);\n}\n}",fichier2);
                    fclose(fichier2);
                    system("start C:\\Users\\axel\\Desktop\\param.h\\param.h.ino");
                    Sleep(6000);
                    keybd_event(VK_CONTROL,0,0,0);
                    keybd_event('U',0,0,0);
                    keybd_event(VK_CONTROL,0,KEYEVENTF_KEYUP,0);
                }

            else
                {
                    printf("Impossible d'ouvrir le fichier \n");
                }
                    break;

            case 3:/*CAS_3*/
                printf("Votre choix est 3 - Une LED sur trois au rythme de votre coeur\n");
                fichier3=fopen("C:\\Users\\axel\\Desktop\\param.h\\param.h.ino","r+");fichier3;



            if (fichier3 != NULL)
                {
                    printf("ouverture du fichier \n");
                    keybd_event(VK_CONTROL,0,0,0);
                    keybd_event('A',0,0,0);
                    keybd_event(VK_DELETE,0,0,0);
                    Sleep(2000);
                    fputs("const short fDelay = 666;//==>90 BPM \n void setup() \n { \n for(short i=2; i<12; i++) {pinMode(i, OUTPUT);}\n  } \nvoid loop()\n{\nshort ledUpTime = 50;\nfor(short i=2; i<15; i+=3)\n {\n  if (i>=12) {i-=10;}\n digitalWrite(i, HIGH);\n delay(ledUpTime);\n digitalWrite(i, LOW);\n delay(fDelay);\n}\n}",fichier3);
                    fclose(fichier3);
                    system("start C:\\Users\\axel\\Desktop\\param.h\\param.h.ino");
                    Sleep(6000);
                    keybd_event(VK_CONTROL,0,0,0);
                    keybd_event('U',0,0,0);
                    keybd_event(VK_CONTROL,0,KEYEVENTF_KEYUP,0);
                }

            else
                {
                    printf("Impossible d'ouvrir le fichier \n");
                }
                    break;

            case 4: /*CAS_4*/
                printf("Votre choix est 4 - Une seule LED au choix au rythme de votre coeur\n");

                    printf("Veuillez choisir la Led entre 1 est 10 que vous voulez faire clignoter\n");
                    scanf("%d",&choix2);

                    switch(choix2) /*NOUVEAU SWITCH*/
                    {
                       case 1: /*CAS_1_BIS*/
                            printf("Votre choix de Led est la numéro 1");
                            fichier40=fopen("C:\\Users\\axel\\Desktop\\param.h\\param.h.ino","r+");fichier40;



            if (fichier40 != NULL)
                {
                    printf("ouverture du fichier \n");
                    keybd_event(VK_CONTROL,0,0,0);
                    keybd_event('A',0,0,0);
                    keybd_event(VK_DELETE,0,0,0);
                    Sleep(2000);
                    fputs("const short fDelay = 666;//==>90 BPM \n const short ledUpTime = 50; \n const short chosenLED = 2; \n void setup()\n {\npinMode(chosenLED, OUTPUT);n} \n void loop() \n{\ndigitalWrite(chosenLED, HIGH);\n delay(ledUpTime);\ndigitalWrite(chosenLED, LOW);\ndelay(fDelay);\n}",fichier40);
                    fclose(fichier40);
                    system("start C:\\Users\\axel\\Desktop\\param.h\\param.h.ino");
                    Sleep(6000);
                    keybd_event(VK_CONTROL,0,0,0);
                    keybd_event('U',0,0,0);
                    keybd_event(VK_CONTROL,0,KEYEVENTF_KEYUP,0);
                }

            else
                {
                    printf("Impossible d'ouvrir le fichier \n");
                }
                    break;

                       case 2: /*CAS_2_BIS*/
                            printf("Votre choix de Led est la numéro 2");
                            fichier41=fopen("C:\\Users\\axel\\Desktop\\param.h\\param.h.ino","r+");fichier41;



            if (fichier41 != NULL)
                {
                    printf("ouverture du fichier \n");
                    keybd_event(VK_CONTROL,0,0,0);
                    keybd_event('A',0,0,0);
                    keybd_event(VK_DELETE,0,0,0);
                    Sleep(2000);
                    fputs("const short fDelay = 666;//==>90 BPM \n const short ledUpTime = 50; \n const short chosenLED = 3; \n void setup()\n {\npinMode(chosenLED, OUTPUT);n} \n void loop() \n{\ndigitalWrite(chosenLED, HIGH);\n delay(ledUpTime);\ndigitalWrite(chosenLED, LOW);\ndelay(fDelay);\n}",fichier41);
                    fclose(fichier41);
                    system("start C:\\Users\\axel\\Desktop\\param.h\\param.h.ino");
                    Sleep(6000);
                    keybd_event(VK_CONTROL,0,0,0);
                    keybd_event('U',0,0,0);
                    keybd_event(VK_CONTROL,0,KEYEVENTF_KEYUP,0);
                }

            else
                {
                    printf("Impossible d'ouvrir le fichier \n");
                }
                    break;

                       case 3: /*CAS_3_BIS*/
                            printf("Votre choix de Led est la numéro 3");
                            fichier42=fopen("C:\\Users\\axel\\Desktop\\param.h\\param.h.ino","r+");fichier42;



            if (fichier42 != NULL)
                {
                    printf("ouverture du fichier \n");
                    keybd_event(VK_CONTROL,0,0,0);
                    keybd_event('A',0,0,0);
                    keybd_event(VK_DELETE,0,0,0);
                    Sleep(2000);
                    fputs("const short fDelay = 666;//==>90 BPM \n const short ledUpTime = 50; \n const short chosenLED = 4; \n void setup()\n {\npinMode(chosenLED, OUTPUT);n} \n void loop() \n{\ndigitalWrite(chosenLED, HIGH);\n delay(ledUpTime);\ndigitalWrite(chosenLED, LOW);\ndelay(fDelay);\n}",fichier42);
                    fclose(fichier42);
                    system("start C:\\Users\\axel\\Desktop\\param.h\\param.h.ino");
                    Sleep(6000);
                    keybd_event(VK_CONTROL,0,0,0);
                    keybd_event('U',0,0,0);
                    keybd_event(VK_CONTROL,0,KEYEVENTF_KEYUP,0);
                }

            else
                {
                    printf("Impossible d'ouvrir le fichier \n");
                }
                    break;

                       case 4: /*CAS_4_BIS*/
                            printf("Votre choix de Led est la numéro 4");
                            fichier43=fopen("C:\\Users\\axel\\Desktop\\param.h\\param.h.ino","r+");fichier43;



            if (fichier43 != NULL)
                {
                    printf("ouverture du fichier \n");
                    keybd_event(VK_CONTROL,0,0,0);
                    keybd_event('A',0,0,0);
                    keybd_event(VK_DELETE,0,0,0);
                    Sleep(2000);
                    fputs("const short fDelay = 666;//==>90 BPM \n const short ledUpTime = 50; \n const short chosenLED = 5; \n void setup()\n {\npinMode(chosenLED, OUTPUT);n} \n void loop() \n{\ndigitalWrite(chosenLED, HIGH);\n delay(ledUpTime);\ndigitalWrite(chosenLED, LOW);\ndelay(fDelay);\n}",fichier43);
                    fclose(fichier43);
                    system("start C:\\Users\\axel\\Desktop\\param.h\\param.h.ino");
                    Sleep(6000);
                    keybd_event(VK_CONTROL,0,0,0);
                    keybd_event('U',0,0,0);
                    keybd_event(VK_CONTROL,0,KEYEVENTF_KEYUP,0);
                }

            else
                {
                    printf("Impossible d'ouvrir le fichier \n");
                }
                    break;

                       case 5: /*CAS_5_BIS*/
                            printf("Votre choix de Led est la numéro 5");
                            fichier44=fopen("C:\\Users\\axel\\Desktop\\param.h\\param.h.ino","r+");fichier44;



            if (fichier44 != NULL)
                {
                    printf("ouverture du fichier \n");
                    keybd_event(VK_CONTROL,0,0,0);
                    keybd_event('A',0,0,0);
                    keybd_event(VK_DELETE,0,0,0);
                    Sleep(2000);
                    fputs("const short fDelay = 666;//==>90 BPM \n const short ledUpTime = 50; \n const short chosenLED = 6; \n void setup()\n {\npinMode(chosenLED, OUTPUT);n} \n void loop() \n{\ndigitalWrite(chosenLED, HIGH);\n delay(ledUpTime);\ndigitalWrite(chosenLED, LOW);\ndelay(fDelay);\n}",fichier44);
                    fclose(fichier44);
                    system("start C:\\Users\\axel\\Desktop\\param.h\\param.h.ino");
                    Sleep(6000);
                    keybd_event(VK_CONTROL,0,0,0);
                    keybd_event('U',0,0,0);
                    keybd_event(VK_CONTROL,0,KEYEVENTF_KEYUP,0);
                }

            else
                {
                    printf("Impossible d'ouvrir le fichier \n");
                }
                    break;

                       case 6: /*CAS_6_BIS*/
                            printf("Votre choix de Led est la numéro 6");
                            fichier45=fopen("C:\\Users\\axel\\Desktop\\param.h\\param.h.ino","r+");fichier45;



            if (fichier45 != NULL)
                {
                    printf("ouverture du fichier \n");
                    keybd_event(VK_CONTROL,0,0,0);
                    keybd_event('A',0,0,0);
                    keybd_event(VK_DELETE,0,0,0);
                    Sleep(2000);
                    fputs("const short fDelay = 666;//==>90 BPM \n const short ledUpTime = 50; \n const short chosenLED = 7; \n void setup()\n {\npinMode(chosenLED, OUTPUT);n} \n void loop() \n{\ndigitalWrite(chosenLED, HIGH);\n delay(ledUpTime);\ndigitalWrite(chosenLED, LOW);\ndelay(fDelay);\n}",fichier45);
                    fclose(fichier45);
                    system("start C:\\Users\\axel\\Desktop\\param.h\\param.h.ino");
                    Sleep(6000);
                    keybd_event(VK_CONTROL,0,0,0);
                    keybd_event('U',0,0,0);
                    keybd_event(VK_CONTROL,0,KEYEVENTF_KEYUP,0);
                }

            else
                {
                    printf("Impossible d'ouvrir le fichier \n");
                }
                    break;

                       case 7: /*CAS_7_BIS*/
                            printf("Votre choix de Led est la numéro 7");
                            fichier46=fopen("C:\\Users\\axel\\Desktop\\param.h\\param.h.ino","r+");fichier46;



            if (fichier46 != NULL)
                {
                    printf("ouverture du fichier \n");
                    keybd_event(VK_CONTROL,0,0,0);
                    keybd_event('A',0,0,0);
                    keybd_event(VK_DELETE,0,0,0);
                    Sleep(2000);
                    fputs("const short fDelay = 666;//==>90 BPM \n const short ledUpTime = 50; \n const short chosenLED = 8; \n void setup()\n {\npinMode(chosenLED, OUTPUT);n} \n void loop() \n{\ndigitalWrite(chosenLED, HIGH);\n delay(ledUpTime);\ndigitalWrite(chosenLED, LOW);\ndelay(fDelay);\n}",fichier46);
                    fclose(fichier46);
                    system("start C:\\Users\\axel\\Desktop\\param.h\\param.h.ino");
                    Sleep(6000);
                    keybd_event(VK_CONTROL,0,0,0);
                    keybd_event('U',0,0,0);
                    keybd_event(VK_CONTROL,0,KEYEVENTF_KEYUP,0);
                }

            else
                {
                    printf("Impossible d'ouvrir le fichier \n");
                }
                    break;

                       case 8: /*CAS_8_BIS*/
                            printf("Votre choix de Led est la numéro 8");
                           fichier47=fopen("C:\\Users\\axel\\Desktop\\param.h\\param.h.ino","r+");fichier47;



            if (fichier47 != NULL)
                {
                    printf("ouverture du fichier \n");
                    keybd_event(VK_CONTROL,0,0,0);
                    keybd_event('A',0,0,0);
                    keybd_event(VK_DELETE,0,0,0);
                    Sleep(2000);
                    fputs("const short fDelay = 666;//==>90 BPM \n const short ledUpTime = 50; \n const short chosenLED = 9; \n void setup()\n {\npinMode(chosenLED, OUTPUT);n} \n void loop() \n{\ndigitalWrite(chosenLED, HIGH);\n delay(ledUpTime);\ndigitalWrite(chosenLED, LOW);\ndelay(fDelay);\n}",fichier47);
                    fclose(fichier47);
                    system("start C:\\Users\\axel\\Desktop\\param.h\\param.h.ino");
                    Sleep(6000);
                    keybd_event(VK_CONTROL,0,0,0);
                    keybd_event('U',0,0,0);
                    keybd_event(VK_CONTROL,0,KEYEVENTF_KEYUP,0);
                }

            else
                {
                    printf("Impossible d'ouvrir le fichier \n");
                }
                    break;

                       case 9: /*CAS_9_BIS*/
                            printf("Votre choix de Led est la numéro 9");
                            fichier48=fopen("C:\\Users\\axel\\Desktop\\param.h\\param.h.ino","r+");fichier48;



            if (fichier48 != NULL)
                {
                    printf("ouverture du fichier \n");
                    keybd_event(VK_CONTROL,0,0,0);
                    keybd_event('A',0,0,0);
                    keybd_event(VK_DELETE,0,0,0);
                    Sleep(2000);
                    fputs("const short fDelay = 666;//==>90 BPM \n const short ledUpTime = 50; \n const short chosenLED = 10; \n void setup()\n {\npinMode(chosenLED, OUTPUT);n} \n void loop() \n{\ndigitalWrite(chosenLED, HIGH);\n delay(ledUpTime);\ndigitalWrite(chosenLED, LOW);\ndelay(fDelay);\n}",fichier48);
                    fclose(fichier48);
                    system("start C:\\Users\\axel\\Desktop\\param.h\\param.h.ino");
                    Sleep(6000);
                    keybd_event(VK_CONTROL,0,0,0);
                    keybd_event('U',0,0,0);
                    keybd_event(VK_CONTROL,0,KEYEVENTF_KEYUP,0);
                }

            else
                {
                    printf("Impossible d'ouvrir le fichier \n");
                }
                    break;

                       case 10: /*CAS_10_BIS*/
                            printf("Votre choix de Led est la numéro 10");
                            fichier49=fopen("C:\\Users\\axel\\Desktop\\param.h\\param.h.ino","r+");fichier49;



            if (fichier49 != NULL)
                {
                    printf("ouverture du fichier \n");
                    keybd_event(VK_CONTROL,0,0,0);
                    keybd_event('A',0,0,0);
                    keybd_event(VK_DELETE,0,0,0);
                    Sleep(2000);
                    fputs("const short fDelay = 666;//==>90 BPM \n const short ledUpTime = 50; \n const short chosenLED = 11; \n void setup()\n {\npinMode(chosenLED, OUTPUT);n} \n void loop() \n{\ndigitalWrite(chosenLED, HIGH);\n delay(ledUpTime);\ndigitalWrite(chosenLED, LOW);\ndelay(fDelay);\n}",fichier49);
                    fclose(fichier49);
                    system("start C:\\Users\\axel\\Desktop\\param.h\\param.h.ino");
                    Sleep(6000);
                    keybd_event(VK_CONTROL,0,0,0);
                    keybd_event('U',0,0,0);
                    keybd_event(VK_CONTROL,0,KEYEVENTF_KEYUP,0);
                }

            else
                {
                    printf("Impossible d'ouvrir le fichier \n");
                }
                    break;

                       default:
                           printf("ERREUR");
                        break;
                    }
            case 5: /*CAS_5*/
                    printf("5 - Une chenille de LED au rythme de votre coeur\n");
                   fichier5=fopen("C:\\Users\\axel\\Desktop\\param.h\\param.h.ino","r+");fichier5;



            if (fichier5 != NULL)
                {
                    printf("ouverture du fichier \n");
                    keybd_event(VK_CONTROL,0,0,0);
                    keybd_event('A',0,0,0);
                    keybd_event(VK_DELETE,0,0,0);
                    Sleep(2000);
                    fputs("const short fDelay = 666;//==>90 BPM  \n \n \n void setup() \n { \n for(short i=2; i<12; i++) \n {\npinMode(i, OUTPUT);\n} \n } \n \n \n void loop()\n{\n short ledUpTime = 50;\n for(short i=2; i<12; i++)\n {\n digitalWrite(i, HIGH);}\n delay(ledUpTime);\n for(short i=2; i<12; i++) {digitalWrite(i, LOW);}\n delay(fDelay-ledUpTime);\n}",fichier5);
                    fclose(fichier5);
                    system("start C:\\Users\\axel\\Desktop\\param.h\\param.h.ino");
                    Sleep(6000);
                    keybd_event(VK_CONTROL,0,0,0);
                    keybd_event('U',0,0,0);
                    keybd_event(VK_CONTROL,0,KEYEVENTF_KEYUP,0);
                }

            else
                {
                    printf("Impossible d'ouvrir le fichier \n");
                }
                    break;
    }
    }

