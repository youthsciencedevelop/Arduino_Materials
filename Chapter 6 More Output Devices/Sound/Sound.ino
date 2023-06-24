#define Do 131
#define Re 147
#define Mi 165
#define Fa 175
#define Sol 196
#define La 220
#define Ti 247
#define Do2 262
// Defining the pin connected to the speaker
int tonePin = 13;

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  tone(tonePin, Do, 125);
 delay(125);
 // Re
 tone(tonePin, Re, 125);
 delay(125);
 // Mi
 tone(tonePin, Mi, 125);
 delay(125);
 // Fa
 tone(tonePin, Fa, 125);
 delay(125);
 // Sol
 tone(tonePin, Sol, 125);
 delay(125);
 // La
 tone(tonePin, La, 125);
 delay(125);
 // Ti
 tone(tonePin, Ti, 125);
 delay(125);
 // Higher Do
 tone(tonePin, Do2, 125);
 delay(125);

}
