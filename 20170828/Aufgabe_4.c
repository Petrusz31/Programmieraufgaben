#include <stdio.h>
#include <stdlib.h>

int main()
{
    int herzschlaege, alter, ergebnis;


    //Eingabe des Nutzers
    printf("Alter in Jahren: ");
    scanf("%d", &alter);
    printf("Herzschlaege pro Minute: ");
    scanf("%d", &herzschlaege);
    //Rechnung
    ergebnis = alter * (herzschlaege*60*24*365); //Herzschl�ge pro Jahr = 365, Schl�ge pro Tag = 24, Schl�ge pro Stunde = 60

    //Ausgabe
    printf("Anzahl an Herzschlaegen fuer die bisherige Lebzeit: %d", ergebnis);

    return 0;
}
