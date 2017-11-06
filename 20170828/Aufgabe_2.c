#include <stdio.h>
#include <stdlib.h>

int main()
{
    double zahl_1, zahl_2, zahl_3, zahl_4, summe;

    //Eingabe
    printf("Erste Zahl: ");
    scanf("%lf", &zahl_1);
    printf("\nZweite Zahl: ");
    scanf("%lf", &zahl_2);
    printf("\nDritte Zahl: ");
    scanf("%lf", &zahl_3);
    printf("\nVierte Zahl: ");
    scanf("%lf", &zahl_4);
    //Verarbeitung
    summe = zahl_1 + zahl_2 + zahl_3 + zahl_4;
    //Ausgabe
    printf("\nAddition aller Zahlen: %lf", summe);

    return 0;
}

