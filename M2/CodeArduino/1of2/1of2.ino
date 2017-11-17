const short fDelay = 666; //==>90 BPM, écart entre deux battement de coeurs

void setup()
{
    for(short i=2; i<12; i++) {pinMode(i, OUTPUT);}//initialisation des pins 2 a 11
}

void loop()
{
    short ledUpTime = 50; //période d'allumage d'une led
    for(short i=2; i<12; i+=2)// boucle permettant d'allumer toutes les LED une sur deux
    {
        if (i>=12) {i-=10;} // gére l'exception des LED apres la dernière   
        digitalWrite(i, HIGH);
        delay(ledUpTime);
        digitalWrite(i, LOW);
        delay(fDelay);
    }
}
