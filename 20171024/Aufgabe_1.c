#include "stdio.h"

int main() {

    char auswahl;
    double betrag;

    printf("Optionen:\n[e] Euro-Dollar\n[d] Dollar-Euro\n");
    scanf("%c", &auswahl);

    switch(auswahl) {
        case 'e': printf("\nBitte Betrag in Euro eingeben: ");
                  scanf("%lf", &betrag);
                  printf("\n%f EUR -> %f USD", betrag, betrag*1.2);
                    break;
        case 'd': printf("\nBitte Betrag in Euro eingeben: ");
                  scanf("%lf", &betrag);
                  printf("\n%f USD -> %f EUR", betrag, betrag*0.8);
                    break;
        default: printf("\nNOPE");
    }

}