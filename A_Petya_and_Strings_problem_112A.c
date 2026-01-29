#include <stdio.h>
#include <string.h> // untuk strcmp(), Menyediakan fungsi pengolah string
#include <ctype.h> // untuk tolower(), Menyediakan fungsi pengolah karakter

int main() {
    char s1[105], s2[105]; // Soal maksimal 100 karakter, dilebihkan untuk menghindari overflow

    // Input dua string
    scanf("%s", s1);
    scanf("%s", s2);

    // Ubah semua huruf menjadi lowercase
    for (int i = 0; s1[i] != '\0'; i++) { // Loop jalan selama belum ketemu null terminator, Begitu ketemu → STOP
        s1[i] = tolower(s1[i]); // Ubah karakter ke lowercase
        s2[i] = tolower(s2[i]); // Ubah karakter ke lowercase
    }

    // Bandingkan secara leksikografis
    int hasil = strcmp(s1, s2); // fungsi yg digunakan untuk membandingkan dua string secara leksikografis (urut kamus)

    if (hasil < 0) {
        printf("-1\n"); // s1 lebih kecil dari s2
    } else if (hasil > 0) {
        printf("1\n"); // s1 lebih besar dari s2
    } else {
        printf("0\n"); // s1 sama dengan s2
    }   

    return 0;
}

// s1 dnan s2 itu adalah array of char (string)
// untuk mengakses karakter ke-i dari string s1, kita gunakan s1[i]
// untuk mengakses karakter ke-i dari string s2, kita gunakan s2[i]
// jadi kita bisa melakukan operasi pada tiap karakter dari string tersebut dengan cara mengaksesnya menggunakan indeks i
// contoh: mengubah semua karakter pada string s1 menjadi huruf kecil
