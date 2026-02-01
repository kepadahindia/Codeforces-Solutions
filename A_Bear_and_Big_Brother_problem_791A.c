#include <stdio.h>

int main() {
    int a, b; // a: Bear's weight (Limak), b: Big Brother's weight (Bob)
    int years = 0; // Number of years until Bear becomes heavier than Big Brother

    scanf("%d %d", &a, &b); // Input initial weights, a < b 

    while (a <= b) {
        a *= 3; // a = a * 3;
        b *= 2; // b = b * 2;
        years++; // Increment the year count: years = years + 1;
    }

    printf("%d\n", years);

    return 0;
}
