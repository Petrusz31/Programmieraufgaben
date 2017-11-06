#include <stdio.h>
#include <stdlib.h>

int main()
{
    double kilometer, verbrauch;


    //Eingabe
    printf("Geben sie die verbrauchte Benzinmenge in Litern ein: ");
    scanf("%lf", &verbrauch);
    printf("\nGeben sie die dabei gefahrenen Kilometer ein: ");
    scanf("%lf", &kilometer);
    //Ausgabe und Verarbeitung kombiniert
    printf("Ihr Verbrauch pro 100 Kilometer betraegt: %.2lf", verbrauch * (100 / kilometer));

    return 0;
}
