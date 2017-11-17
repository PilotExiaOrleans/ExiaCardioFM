const short fDelay = 666;//==>90 BPM
 void setup()
 {
 for(short i=2; i<12; i++) {pinMode(i, OUTPUT);}
 }
 void loop()
 {
 for(short i=2; i<12; i++)
 {
 digitalWrite(i-1, LOW);
 digitalWrite(i, HIGH);
 delay(fDelay);
 if(i == 11)
 {
 digitalWrite(i, LOW);
 }
 }
 }