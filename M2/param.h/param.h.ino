const short fDelay = 666;//==>90 BPM 
 void setup() 
 { 
 for(short i=2; i<12; i++) {pinMode(i, OUTPUT);}
  } 
void loop()
{
short ledUpTime = 50;
for(short i=2; i<15; i+=3)
 {
  if (i>=12) {i-=10;}
 digitalWrite(i, HIGH);
 delay(ledUpTime);
 digitalWrite(i, LOW);
 delay(fDelay);
}
}