#include "stdio.h"

#define Erweiterung //Aktiviert Zusatzaufgabe für Aufgabe 1

int main() {
    #ifdef Erweiterung
    //Hilfsvariablen für Zusatzaufgabe
    const double pi = 3.14;
    const double abrieb = 0.05; //Abriebskonstante von 0.05cm pro Runde
    double reifencm = 50;       //Anfänglicher Reifendurchmesser
    #endif
    //Variablen für Gesamtaufgabe
    int rundenmenge, sekunden, help, puffer = 0;
    const int stundensekunden = 60*60*2;
    //Eingabe der Startparameter
    printf("Rundenzahl eingeben: ");
    scanf("%d", &rundenmenge);
    printf("Zeit pro Runde in Sekunden eingeben: ");
    scanf("%d", &sekunden);

    //Help zählt die aktuelle Runde durch Inkrementierung
    help = 0;
    //Es wird von der letzten Runde bis null gezählt
    while(rundenmenge) {
        //Gesamtzeit setzt sich aus den Sekunden, multipliziert mit der Rundenzahl, und dem Abrieb zusammen
        printf("Runde: %d\t\tGesamtzeit: %d\n", help+1, sekunden+puffer);
        sekunden += sekunden/(help+1);  //Da Sekunden gleichermaßen der Input für die Länge einer Runde,
                                        //Sowie der Speicher der aktuellen Rundenzeit ist, muss bei der Addition
                                        //Die Zeit durch die Rundenzahl geteilt werden, um korrekt zu sein
        puffer += (2*(help+1));     //Puffer errechnet den Abrieb
        help++;
        rundenmenge--;
        if ((sekunden + puffer) >= stundensekunden) {   //Abbruch, falls Zeit über 2std.
                printf("Rennen darf hoechstens zwei Stunden dauern!");
                return 0;
        }
        #ifdef Erweiterung      //Berechne Abrieb und gebe aus, im Falle der Zusatzaufgabe
        reifencm -= abrieb;
            printf("Der Reifendurchmesser ist gerade: %lf\n\n", 2*pi*reifencm);
        #endif
    }





}