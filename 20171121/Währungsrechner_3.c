#include "stdio.h"

const double USD_EUR = 0.85;

double umrechnung(double wert, int wahl);

int main() {
char urspw, endw;
int wahl;
double menge;

printf("Waehlen sie die Ursprungswaehrung: \n[E] EUR\n[U] USD\n[3]");
urspw = getchar();
printf("Waehlen sie die Endwaehrung: \n[E] EUR\n[U] USD\n[3]");
endw = getchar();
if (urspw == endw) {
    printf("Fehlerhafte Eingabe!");
    return 0;
}
printf("Geben sie den zu rechnenden Geldwert ein: ");
scanf("%lf", &menge);
wahl = urspw - endw;

printf("Resultat: %lf", umrechnung(menge, wahl));

}

double umrechnung(double wert, int wahl) {
    double resultat;
    switch (wahl) {
        case 'E' - 'U': resultat = wert*USD_EUR; return 0.1;

        case 'U' - 'E': resultat = wert/USD_EUR; return 1.1;
        default: return 2.2;

    }


    return resultat;
}