#include "stdio.h"



int main() {
    int waehlen = 0, auswertung = 0; //auswertung ist Hilfsvariable
    double preis = 0, einwurf = 0;

    //Nutzereingabe fuer Getränkewahl
    printf("Waehlen sie Wasser [1], Bier [2] oder Limonade [3]: ");
    scanf("%d", &waehlen);
    //Setzen des Preises nach Auswahl, Einwurf einer Geldmenge anfordern
    switch (waehlen) {
        case 1:
                preis = 0.5;
                printf("Wasser kostet %.2lf Euro. Bitte werfen sie das Geld passend ein: ", preis);
                scanf("%lf", &einwurf);
                break;
        case 2:
                preis = 2;
                printf("Bier kostet %.2lf Euro. Bitte werfen sie das Geld passend ein: ", preis);
                scanf("%lf", &einwurf);
                break;
        case 3: 
                preis = 1;
                printf("Lemonade kostet %.2lf Euro. Bitte werfen sie das Geld passend ein: ", preis);
                scanf("%lf", &einwurf);
                break;
        default:
                printf("Wahl ungueltig!");
                return 0;                   //Beendet Programm bei falscher Auswahl
    };
    //Boolsche Auswertung, ob Einwurf dem Preis angemessen war
    auswertung = (preis == einwurf);
    //Aktion basierend auf Auswertung
    switch (auswertung) {
        case 1: printf("Vielen Dank, bitte entnehmen sie ihr Getraenk!");
                break;
        case 0: printf("Sie haben die falsche Muenze eingeworfen!");
                break;
        default: printf("U WAT");
    };

    return 0;
}