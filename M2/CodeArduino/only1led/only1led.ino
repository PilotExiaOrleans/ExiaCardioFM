const short fDelay = 666;//==>90 BPM
const short ledUpTime = 50;
const short chosenLED = 2;
void setup() {pinMode(chosenLED, OUTPUT);}
void loop() {digitalWrite(chosenLED, HIGH);delay(ledUpTime);digitalWrite(chosenLED, LOW);delay(fDelay);}
