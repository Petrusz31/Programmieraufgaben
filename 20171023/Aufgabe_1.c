#include "stdio.h"



int main() {

    unsigned int anzahl, fehler = 0, test;
    double preis;

    do {
    fehler = 1;
    printf("Anzahl eingeben: ");
    test = scanf("%d", &anzahl);
    printf("%d", test);
     if(!test) { //Scanf gibt die Anzahl an erfolgreichen Operationen zurück - 0 ist demnach Fehler
        printf("\nDatentypfehler!\n");
        fehler = 0;
        continue;
     }
    printf("\nPreis eingeben: ");
    test = scanf("%lf", &preis);
    printf("%d", test);
    if (!test) {
        printf("\nDatentypfehler\n");
        fehler = 0;
        continue;
    }
    printf("\nAnzahl: %d\nPreis: %.2lf", anzahl, preis);
    } while(fehler);

}