#include "stdio.h"



int main() {
    const double umrechnungskonstante = 2.54;
    double hilfsvariable;   //Genutzt für Zwischenrechnung
    //Auswertung der Eingabe
            for (int i = 1; i <= 22; i++) {
            hilfsvariable = umrechnungskonstante * i;   //Zwischenrechnung für Lesbarkeit
            printf("\n%d Zoll = %.2lf cm\t||\t", i, hilfsvariable);   //Ausgabe mit Zeilenumbrüchung für Lesbarkeit
            hilfsvariable = i / umrechnungskonstante;
            printf("%d cm = %.2lf zoll", i, hilfsvariable);
        }

}