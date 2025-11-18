/*
    LES 2: Functies (Functions)

    We gaan lekker verder met de kookanalogie van les 1!
    Functies zijn net een soort mini-recepten binnen het grote recept.

    Net zoals je in een recept vaak leest: "De oven moet voorverwarmen op 180 graden".
    Natuurlijk is dat niet maar één stap! Je moet de oven aanzetten, de temperatuur instellen, wachten tot hij warm is, etc.
    Maar omdat dit zo'n veelvoorkomende taak is, schrijven we het als één stap op.

    Functies kan je zien als zo'n veelvoorkomende taak: we geven het een naam en kunnen het overal in ons programma gebruiken. Zo hoeven we niet steeds dezelfde code opnieuw te schrijven!

    In plaats van alles in main() te proppen, kun je dus losse taakjes schrijven.

    Bijvoorbeeld:

    int optellen(int a, int b) {    // a & b zijn de ingrediënten
        return a + b;               // dit is het resultaat van het recept
    }

    In main() kun je dit hulp-recept aanroepen:
    int totaal = optellen(3, 5);

    Misschien vraag je je af wat "return" betekent? En wat die "int" voor de functie betekent? Dat behandelen we in het volgende bestandje.
*/

/* ================= OEFENINGEN =================

1. Maak de functie "groet" af zodat die "Hoi!" print. Roep deze aan in main.

2. Maak een functie "verdubbel" die één int-parameter heeft
   en de dubbele waarde teruggeeft. Print het resultaat. Roep deze aan in main.

3. Bonus: Maak een functie "som" die 3 getallen optelt. Roep deze uiteraard
   ook aan in main.

=================================================
*/

#include <stdio.h>

// Maak de volgende functies af!

void groet(){
    // Vul aan zodat deze functie "Hoi!" print



}

int verdubbel(int x){
    // Vul aan zodat deze functie het dubbele van x teruggeeft
    // Bijvoorbeeld: als x 4 is, moet de functie 8 teruggeven
    // Als je dit in Python kan, kan je dit ook in C!



    return x;
}

// Ruimte voor de bonusfunctie, deze moet je zelf opstellen!



int main() {
    // Roep hier je functies aan!



    return 0;
}
