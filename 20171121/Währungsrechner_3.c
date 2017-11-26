#include "stdio.h"

const double USD_EUR = 0.85;

double umrechnung(double wert, int ursprung, int ende);

int main() {
int urspw, endw;
double menge;

printf("Waehlen sie die Ursprungswaehrung: \n[1] EUR\n[2] USD\n[3]");
scanf("%d", &urspw);
printf("Waehlen sie die Endwaehrung: \n[1] EUR\n[2] USD\n[3]");
scanf("%d", &endw);
printf("Geben sie den zu rechnenden Geldwert ein: ");
scanf("%lf", &menge);


printf("Resultat: %f", umrechung());

}

double umrechnung(double wert, int ursprung, int ende) {
    double resultat;



    return resultat;
}