#include "stdio.h"

double volRech(double);
double obRech(double);

const double pi = 3.14;

int main() {
double radius;
printf("Geben sie den Radius der Kugel ein!\n");
scanf("%lf", &radius);

printf("Volumen ist: %lf\n", volRech(radius));
printf("Oberflaeche ist: %lf", obRech(radius));

}
 
double volRech(double radius) {
return 0.75*pi*(radius*radius*radius);
}

double obRech(double radius) {
return 4*pi*(radius*radius);
}
