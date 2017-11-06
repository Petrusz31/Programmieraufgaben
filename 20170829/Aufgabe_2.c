#include "stdio.h"


int main() {
//Deklarationen
int anzahl = 0;
double preis = 0, summe_o_rabatt = 0, summe_m_rabatt = 0;

//Eingabe
printf("Anzahl: ");
scanf("%d", &anzahl);
printf("\nArtikelpreis in Euro: ");
scanf("%lf", &preis);

summe_o_rabatt = preis * anzahl;

//Fallabhängige Ausgabe
if (summe_o_rabatt < 10) {  //Falls Summe weniger als 10 beträgt
    printf("Summe der Rechnung: %.2lf", summe_o_rabatt);
} else {                    //Falls Summe 10 oder mehr beträgt
    summe_m_rabatt = summe_o_rabatt - (summe_o_rabatt * 0.2); //20% abziehen vom Endwert
    printf("Summe der Rechnung: %.2lf", summe_m_rabatt);      //Andere Variable für Endwert nutzen
}

return 0;
}