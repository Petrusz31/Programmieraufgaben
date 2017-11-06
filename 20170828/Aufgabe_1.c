#include <stdio.h>
#include <stdlib.h>

int main()
{
    double preis_1, preis_2, summe;
    int anzahl_1, anzahl_2;

    //Eingabe
    printf("Erster Artikel (Anzahl): ");
    scanf("%d", &anzahl_1);
    printf("\nErster Artikel (Preis in Euro): ");
    scanf("%lf", &preis_1);
    printf("\nZweiter Artikel (Anzahl): ");
    scanf("%d", &anzahl_2);
    printf("\nZweiter  Artikel (Preis in Euro): ");
    scanf("%lf", &preis_2);
    //Verarbeitung
    summe = (preis_1 * anzahl_1)+(preis_2 * anzahl_2);
    //Ausgabe
    printf("\nSumme ohne Rabatt: %.2lf", summe);
    printf("\nSumme mit Rabatt: %.2lf", summe - (summe*0.2)); //20% Abziehen = 20% des Wertes von sich selbst abziehen

    return 0;
}
