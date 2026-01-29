#include <stdio.h>
#include <stdlib.h>   // untuk abs(), fungsi nilai mutlak

int main() {
    int x, y;   // koordinat baris dan kolom dari elemen '1'
    int a; // variabel sementara untuk membaca elemen matriks

    // Membaca matriks 5x5
    for (int i = 1; i <= 5; i++) { // baris
        for (int j = 1; j <= 5; j++) { // kolom
            scanf("%d", &a); // membaca elemen matriks, disimpan ke variabel a
            if (a == 1) { // jika elemen adalah '1', simpan koordinatnya, Soal menjamin hanya ada satu angka 1, Jadi tidak akan tertimpa nilai lain
                x = i;
                y = j;
            }
        }
    }

    // Hitung jumlah langkah minimum
    int moves = abs(x - 3) + abs(y - 3); // Menghitung Jumlah Moves menggunakan jarak Manhattan

    // Cetak hasil
    printf("%d\n", moves);

    return 0;
}


// for (baris) {
//    for (kolom) {
// proses elemen matriks
//    }
// }

// jadi komputer itu membaca elemen barisnya dulu barus elemen kolomnya:
// matrix[i][j]
// i = baris
// j = kolom
