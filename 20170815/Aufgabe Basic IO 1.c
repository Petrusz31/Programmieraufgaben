#include <stdio.h>
#include <stdlib.h>


int main()
{
//Variablendeklarationen
int amount;
double price;
//Inputprompt und Konsoleninput für Integer "amount"
printf("Anzahl eingeben: ");
scanf("%d",&amount);
printf("\n"); //Zeilenumbruch

//Inputprompt und Konsoleninput für double "price"
printf("Preis in Euro eingeben: ");
scanf("%lf",&price);
printf("\n");

//Ausgabe von Integerwert "amount"
printf("Anzahl: %d", amount);
printf("\n");
//Ausgabe von Floatingpoint-Wert "price"
printf("Preis: %lf", price);
printf("\n");


return 0;
}
