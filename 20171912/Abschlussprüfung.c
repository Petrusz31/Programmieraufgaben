#include "stdio.h"

#define TRUE 1

double BerechneEndwert(double, double);
double AusgabeNoteA(double);
double AusgabeNoteB(double);

int bestanden;

int main() {
double noteA, noteB;

printf("Note Teil A:");
scanf("%fl", &noteA);
printf("Note Teil B:");
scanf("%fl", &noteB);
bestanden = TRUE;
printf("Bestanden: %fl", BerechneEndwert(noteA, noteB));


}

