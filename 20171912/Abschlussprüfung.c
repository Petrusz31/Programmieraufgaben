
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

double BerechneEndwert(double TeilA,double TeilB){
    double AusgabeA, AusgabeB;
    AusgabeA=AusgabeNoteA(TeilA);
    AusgabeB=AusgabeNoteB(TeilB);
    printf("Bestanden = 1; Nicht Bestanden = 0: %d",bestanden);
    printf("Note Teil A: %lf",AusgabeA);
    printf("Note Teil B: %lf",AusgabeB);
}
