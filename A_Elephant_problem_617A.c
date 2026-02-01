#include <stdio.h>

int main() {
    int x;
    scanf("%d", &x);

    int steps = (x + 4) / 5;

    printf("%d\n", steps);

    return 0;
}


// int steps = (x + 4) / 5; Supaya langkah minimum, kita selalu ambil 5, jadi kita bagi jarak total dengan 5.
// x = jarak total yang harus ditempuh gajah
// Rumus Umum Ceil (Pembulatan ke atas) adalah: ceil(a / b) = (a + b - 1) / b
// Dalam kasus ini, a adalah x (jarak total) dan b adalah 5 (langkah maksimum per langkah).
// Jadi, ceil(x / 5) = (x + 5 - 1) / 5 = (x + 4) / 5
