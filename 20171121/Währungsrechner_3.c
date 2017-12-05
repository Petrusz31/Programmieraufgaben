#include "stdio.h"
#include "stdlib.h" //Notwendig für Exit

//Konstanten

const double USD_EUR = 0.85;
const double EUR_DM = 2;
const double USD_DM = 0.85*2;

//Funktionsdeklarationen

double umrechnung(double wert, int wahl);   //Die Rechnung auf Basis der Auswahl
void check(char wahl);                      //Testet, ob ungültige Werte eingegeben wurden

int main() {
char urspw, endw;   //Ursprungswert, Endwert
int wahl;           //Auswahl
double menge;

printf("Waehlen sie die Ursprungswaehrung: \n[E] EUR\n[U] USD\n[D] DM\n");
scanf("%c", &urspw);
getchar();  //Bugfix - Die Eingabe mit Enter bei Scanf erzeugt einen Zeilenumbruch, den sonst das nächste scanf lesen würde.
            //Getchar frisst dieses \n
check(urspw);
printf("Waehlen sie die Endwaehrung: \n[E] EUR\n[U] USD\n[D] DM\n");
scanf("%c", &endw);
getchar();
check(endw);
if (urspw == endw) {        //Fehler bei identischen Eingaben
    printf("Fehlerhafte Eingabe!");
    return 0;
}
printf("Geben sie den zu rechnenden Geldwert ein: ");
scanf("%lf", &menge);
getchar();
wahl = urspw - endw;    //Char-Arithmetik, um die Werte aus dem Switch-Case zu haben

printf("Resultat: %.2lf", umrechnung(menge, wahl));

}

//Funktionsdefinitionen

double umrechnung(double wert, int wahl) {
    switch (wahl) {    //Char-Arithmetik, um herauszufinden, in welche Richtung gerechnet werden soll
        case 'E' - 'U': return wert*USD_EUR;
        case 'U' - 'E': return wert/USD_EUR;
        case 'U' - 'D': return wert*USD_DM;
        case 'E' - 'D': return wert*EUR_DM;
        case 'D' - 'U': return wert/USD_DM;
        case 'D' - 'E': return wert/EUR_DM;
        default: return 2.2;
    }
}

void check (char wahl) {
switch (wahl) {
    case 'U':
    case 'E':
    case 'D': return;
    default: printf("Fehlerhafte Eingabe!"); exit (1);
}
}