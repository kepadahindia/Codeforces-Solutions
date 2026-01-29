#include <stdio.h>

int main() {
    long long n, m, a;

    // Input panjang, lebar, dan ukuran ubin
    scanf("%lld %lld %lld", &n, &m, &a);

    // Hitung jumlah ubin untuk masing-masing sisi (pembulatan ke atas)
    long long tiles_n = (n + a - 1) / a; // Ini pembulatan ke atas (ceil) tanpa if
    long long tiles_m = (m + a - 1) / a; // Ini pembulatan ke atas (ceil) tanpa if

    // Total ubin
    long long total = tiles_n * tiles_m;

    // Output hasil
    printf("%lld\n", total);

    return 0;
}
