#include "stdio.h"


int main() {
double umsatz, prozent;
printf("Umsatz eingeben: ");
scanf("%lf", &umsatz);

if (umsatz >=500) {
    prozent = 10;
}
else if (umsatz >=100) {
    prozent = 5;
}
printf("Umsatz: %f\nRabattniveau:%d\nEndergebnis:%f", umsatz, prozent, umsatz * (1/prozent));



}
