/*
    LES 3: Datatypes & Variabelen (& Return Types)

    In een C-programma gebruik je variabelen om data op te slaan*
    Zie ze als potjes of bakjes waar je ingrediënten in bewaart tijdens het koken.

    Voorbeeld:
    int leeftijd = 18;
    float lengte = 1.84;
    char naam[] = "John Code";

    Wat gebeurt hier?
    - "int" vertelt welk soort ingrediënt het is (een geheel getal)
    - "leeftijd" is het label op het potje
    - "= 18" stopt de waarde in het potje

    Het datatype bepaalt:
    - hoeveel geheugen het potje krijgt
    - wat je ermee kunt doen
    - of de computer fouten moet geven
        (bijv: je kunt geen tekst in een int-variabele stoppen)

    Veelgebruikte datatypes:
    - int      -> geheel getal          (2, 17, -5)
    - float    -> kommagetal            (1.75, 3.14)
    - char     -> precies 1 teken       ('A')
    - char[]   -> tekst / string        ("Hallo")
    - bool     -> true / false          (waar / niet waar)

    ==============================================================
    Over functies & return types
    ==============================================================

    Een functie is een mini-recept binnen het hoofdrecept (main).
    Daarbij is het return-type het soort gerecht dat de functie oplevert.

    Voorbeeld:
    int optellen(int a, int b) {
        return a + b;
    }

    Analogie:
    - "int" = dit recept levert een geheel getal als eindresultaat
    - "a" en "b" = ingrediënten die je erin stopt
    - "return" = het bord dat de keuken verlaat, het eindproduct

    Belangrijk:
    - Elke functie met een return type moet een return-regel hebben
    - Het type na "return" moet overeenkomen met het type dat de functie belooft te leveren

    Voorbeeld met float:

    float gemiddeld(float x, float y) {
        return (x + y) / 2;
    }

    Als een functie géén eindproduct oplevert (dus alleen iets uitvoert)
    dan noemen we dat een "void" functie:

    void groet() {
        printf("Hoi!");
    }

    void = dit recept levert geen gerecht op, maar het doet wel iets.

*/

/* ================= OEFENINGEN =================

1. Maak variabelen voor:
   - je naam   (char[])
   - je leeftijd (int)
   - je lengte (float)
   Print ze in duidelijke zinnen.

2. Maak 2 int-variabelen, tel ze op en print de som.

3. Bonus:
   Maak een bool "student".
   Als student true is -> print "Ik ben student"
   anders -> print "Ik ben geen student"

=================================================
*/

#include <stdio.h>
#include <stdbool.h>

int main() {

    // Hieronder kun je jouw eigen code schrijven!



    return 0;
}
