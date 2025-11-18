/*
    LES 1: Basis Syntax (Structure / printf)

    Welkom bij les 1! In deze les gaan we kijken naar de basisstructuur van een C-programma.
    Koken is een goede metafoor om te begrijpen hoe programmeren werkt, dus in deze lessen
    gebruiken we die analogie om de concepten uit te leggen.
    
    Denk aan een C-programma alsof het een recept is voor de computer:

    - #include <stdio.h>  = de ingrediënten in huis halen
    - int main() { }      = de keuken waar het echte koken gebeurt
    - statements ;        = instructies / stappen in het recept
    - return 0;           = zeggen tegen de computer "we zijn klaar, alles is gelukt"

    Je schrijft dus eigenlijk een lijst van instructies op, en de computer
    voert deze een voor een uit.

    Voorbeeld:
    
    #include <stdio.h>              // pak printf uit de kast
    int main() {                    // we beginnen met koken
        printf("Hallo wereld!");    // stap 1: print tekst
        return 0;                   // eindresultaat geslaagd
    }

    Let op de puntkomma (;) aan het einde van de regel. Dit geeft het einde van een statement aan! Deze MOET er altijd zijn, anders crasht je programma.

    In dit voorbeeld gebruiken we de functie `printf` om tekst op het scherm te zetten.
    printf() "print" een stukje tekst naar het scherm.
    De tekst die je wilt printen zet je tussen aanhalingstekens ("").
    Om naar een nieuwe regel te gaan, typ je \n binnen de aanhalingstekens.
    Het is handig om \n te gebruiken aan het einde van je tekst, zodat de volgende prompt netjes op een nieuwe regel begint.

    Probeer het zelf eens uit in de oefeningen hieronder!
*/

/* ================= OEFENINGEN =================

1. Print: "Ik leer programmeren in C!"

2. Print je naam op de eerste regel en je favoriete schoolvak op de tweede.

3. Bonus: Print de volgende tekst met één printf:
   Hallo allemaal
   Ik ben begonnen met C programmeren!
   Dit is mijn eerste programma.

=================================================
*/

#include <stdio.h>

int main() {

    // Een voorbeeldje om je op weg te helpen:
    printf("Hello world!\n");

    // Hieronder kun je jouw eigen code schrijven!


    return 0;
    // Zorg er wel voor dat je return 0; aan het einde van main() blijft staan!
}
