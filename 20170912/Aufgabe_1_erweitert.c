#include "stdio.h"



int main() {
    const double umrechnungskonstante = 2.54;
    int auswahl;
    double hilfsvariable;   //Genutzt für Zwischenrechnung

    //Eingabe
    printf("Auswahl\n[1]Zoll -> cm\n[2]cm -> Zoll\nEingabe: ");
    scanf("%d", &auswahl);
    //Auswertung der Eingabe
    switch(auswahl) {
        case 1:
            for (int i = 1; i <= 22; i++) {
                hilfsvariable = umrechnungskonstante * i;   //Zwischenrechnung für Lesbarkeit
                printf("\n%d Zoll = %.2lf cm", i, hilfsvariable);   //Ausgabe mit Zeilenumbrüchung für Lesbarkeit
            }
            break;
        case 2:
        for (int i = 1; i <= 22; i++) {
            hilfsvariable = i / umrechnungskonstante;
            printf("\n%d cm = %.2lf zoll", i, hilfsvariable);
        }
            break;
        default: printf("Ungueltige Auswahl!");

    }

}