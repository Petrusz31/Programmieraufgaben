#include "stdio.h"


//Setup der Auswertung
#define BIRNE 0
#define APFEL 0
#define KIWI 0


int main() {
double apfel = APFEL, kiwi = KIWI, birne = BIRNE;

if (apfel > birne) {
printf("Apfel ist teurer als Birne!\n");
}
if (birne < kiwi) {
printf("Birne ist billiger als Kiwi!\n");
}
if (apfel >= kiwi) {
printf("Apfel ist mindestens so teuer wie Kiwi!\n");
}
if (birne <= kiwi) {
printf("Birne ist hoechstens so teuer wie Kiwi!\n");
}            
if (apfel == kiwi) {
printf("Apfel und Kiwi haben den selben Preis!\n");
} 
if (birne != kiwi) {
printf("Birne und Kiwi haben unterschiedliche Preise!\n");
} 

return 0;
}