#include "stdio.h"
#include "stdlib.h" //Notwendig für Exit

const double USD_EUR = 0.85;
const double EUR_DM = 2;
const double USD_DM = 0.85*2;

double umrechnung(double wert, int wahl);
void check(char wahl);

int main() {
char urspw, endw;
int wahl;
double menge;

printf("Waehlen sie die Ursprungswaehrung: \n[E] EUR\n[U] USD\n[D] DM\n");
scanf("%c", &urspw);
getchar();
check(urspw);
printf("Waehlen sie die Endwaehrung: \n[E] EUR\n[U] USD\n[D] DM\n");
scanf("%c", &endw);
getchar();
check(endw);
if (urspw == endw) {
    printf("Fehlerhafte Eingabe!");
    return 0;
}
printf("Geben sie den zu rechnenden Geldwert ein: ");
scanf("%lf", &menge);
getchar();
wahl = urspw - endw;

printf("Resultat: %.2lf", umrechnung(menge, wahl));

}

double umrechnung(double wert, int wahl) {
    switch (wahl) {    
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