#include "stdio.h"

int min(int x, int y);
int max(int x, int y);
int vorzeichen(int x);

int main() {





}


int min(int x, int y) {
if (x > y) return y;
if (y > x) return x;
}
int max(int x, int y) {
if (x < y) return y;
if (y < x) return x;
}
int vorzeichen(int x) {
if (x < 0) return -1;
if (x == 0) return 0;
if (x > 0) return 1;
}