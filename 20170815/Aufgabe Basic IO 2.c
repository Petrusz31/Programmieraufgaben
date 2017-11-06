#include <stdio.h>
#include <stdlib.h>


int main()
{
 //Variablendeklaration
double number;

//Eingabe an "number" mit vorhergehendem Userprompt
printf("Zahl mit zwei Nachkommastellen eingeben: ");
scanf("%lf",&number);
printf("\n");

//Ausgabe von "number", formatiert auf zwei Nachkommastellen
printf("Nummer: %.2lf", number);
printf("\n");


return 0;
}
