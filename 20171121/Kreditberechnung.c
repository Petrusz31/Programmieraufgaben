#include "stdio.h"

int kredit(double kredithoehe, double jahrzins, double monatsrate);


int main() {
double kredithoehe, jahrzins, monatsrate;

printf("Eingaben: Kredithoehe, Jahreszins, Monatsrate\n");
scanf("%lf", &kredithoehe);
scanf("%lf", &jahrzins);
scanf("%lf", &monatsrate);
printf("Laufzeit in Monaten: %d", kredit(kredithoehe, jahrzins, monatsrate));

}


int kredit(double kredithoehe, double jahrzins, double monatsrate) {

int laufzeit;

laufzeit = kredithoehe+(jahrzins)/monatsrate;

return laufzeit;


}