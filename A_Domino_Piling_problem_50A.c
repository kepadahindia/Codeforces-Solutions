#include <stdio.h>

int main() {
    int M, N;

    // Baca input
    scanf("%d %d", &M, &N);

    // Hitung jumlah maksimal domino
    int result = (M * N) / 2;

    // Cetak hasil
    printf("%d\n", result);

    return 0;
}
