#include "stdio.h"

#define Erweiterung

int main() {
    #ifdef Erweiterung
    int wahl;
    #endif
    double strom, spannung, widerstand;

    do {
    #ifdef Erweiterung //Zusatzaufgabe
    printf("Waehlen sie\n[1] Strom\n[2] Widerstand\n[3] Spannung\n[4] Ende\n");
    scanf("%d", &wahl);
    switch (wahl) {
        case 1: 
        printf("Spannung in V: ");
        scanf("%lf", &spannung);
        printf("\nWiderstand in Ohm: ");
        scanf("%lf", &widerstand);
        printf("Der Strom ist: %.2lf\n\n", spannung/widerstand);
        break;

        case 2:
        printf("Spannung in V: ");
        scanf("%lf", &spannung);
        printf("\nStrom in A: ");
        scanf("%lf", &strom);
        printf("Der Widerstand ist: %.2lf\n\n", strom/spannung);
        break;

        case 3:
        printf("Strom in A: ");
        scanf("%lf", &strom);
        printf("\nWiderstand in Ohm: ");
        scanf("%lf", &widerstand);
        printf("Die Spannung ist: %.2lf\n\n", widerstand*strom);
        break;

        case 4:
        return 0;

        default:
            printf("Auswahl ungueltig!");
    }
    #endif

    #ifndef Erweiterung //Originalaufgabe
    printf("Spannung in V: ");
    scanf("%lf", &spannung);
    printf("\nWiderstand in Ohm: ");
    scanf("%lf", &widerstand);
        if(spannung > 1000 || widerstand > 1000000) {
                printf("Widerstand oder Spannung zu hoch!");
                continue;
        } else if (spannung < 0 || widerstand < 0) {
            printf("Werte duerfen nicht negativ sein!");
            continue;
        }  
    printf("Der Strom durch diesen Widerstand ist: %.2lf Ampere\n", spannung/widerstand);
    } while(!(widerstand == 0 && spannung == 0));
    #endif
    #ifdef Erweiterung
    } while(1);
    #endif
}