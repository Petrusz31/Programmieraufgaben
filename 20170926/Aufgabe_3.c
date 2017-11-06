#include "stdio.h"

int main() {
int anzahl;
const double preis = 1.45;

printf("Anzahl \t\t|\tPreis\n");

for (anzahl = 1; anzahl <= 10; anzahl++) {
printf(" %d \t\t|\t%.2lf Euro\n", anzahl, anzahl*preis);


}


}