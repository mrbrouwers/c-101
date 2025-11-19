/*
    LES 4: If statements (voorwaardes)

    In C-programma's gebruik je if-statements om beslissingen te maken.
    Hiermee kun je bepaalde stukken code alleen uitvoeren als aan een bepaalde voorwaarde wordt voldaan.

    Voorbeeld:
    int age = 18;
    if (age >= 18) {
        printf("Volwassene");
    } else {
        printf("Minderjarig");
    }

    De haakjes {} geven het codeblok aan dat uitgevoerd wordt als de voorwaarde waar is.
    Je kunt ook een "else" toevoegen voor het geval de voorwaarde niet waar is.
    Je kunt meerdere voorwaarden controleren met "else if".
    
    De volgorde is altijd:
     if → else if (optioneel, mag meerdere keren) → else (optioneel).

    Voorbeeld:

    int score = 75;

    if (score >= 90) {
        printf("Uitstekend");
    } else if (score >= 75) {
        printf("Goed");
    } else if (score >= 50) {
        printf("Voldoende");
    } else {
        printf("Onvoldoende");
    }
*/

/* ================= OEFENINGEN =================

1. Maak een variabele "score".
   Als score >= 50, print "Geslaagd".
   Anders print "Gezakt".

2. Maak een int variabele "temperatuur".
   Als temperatuur < 10     → "Koud"
   Als temperatuur 10–25    → "Normaal"
   Anders                    → "Warm"

3. (Bonus) Maak een variabele "dag" (1 t/m 7)
   Print de naam van de dag (1 = maandag, 2 = dinsdag, etc.)

=================================================
*/

#include <stdio.h>

int main() {

    // Hieronder kun je jouw eigen code schrijven!



    return 0;
}
