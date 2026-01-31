#include <stdio.h> // Untuk fungsi input output
#include <string.h> // Untuk fungsi strlen

int main() {
    char s[101]; // Bisa menampung string maksimal 100 karakter + '\0'
    int cnt1 = 0, cnt2 = 0, cnt3 = 0; // Menghitung berapa banyak '1', '2', dan '3'

    // Input string
    scanf("%s", s);

    // Hitung jumlah 1, 2, dan 3
    for (int i = 0; i < strlen(s); i++) { // Menghitung panjang string sampai ketemu '\0'
        // (strlen) Dia jalan mulai dari index 0, terus maju sampai ketemu '\0'
        if (s[i] == '1') cnt1++; // Cek apakah karakter ke-i adalah '1', Kalau iya → cnt1 bertambah
        else if (s[i] == '2') cnt2++; // Cek apakah karakter ke-i adalah '2', Kalau iya → cnt2 bertambah
        else if (s[i] == '3') cnt3++; // Cek apakah karakter ke-i adalah '3', Kalau iya → cnt3 bertambah
    }


    // MENCETAK HASIL
    int first = 1; // Penanda untuk mencetak '+' sebelum angka, kecuali untuk angka pertama

    // Cetak semua 1
    for (int i = 0; i < cnt1; i++) { // Loop mencetak semua angka 1 
        if (!first) printf("+"); // Kalau bukan angka pertama, cetak '+' (“Kalau sudah pernah cetak angka sebelumnya → kasih +”)
        printf("1"); // Cetak angka 1
        first = 0; // Setelah mencetak angka pertama, set first ke 0
    }

    // Cetak semua 2
    for (int i = 0; i < cnt2; i++) { // Loop mencetak semua angka 2
        if (!first) printf("+"); // Kalau bukan angka pertama, cetak '+'
        printf("2"); // Cetak angka 2
        first = 0; // Setelah mencetak angka pertama, set first ke 0
    }

    // Cetak semua 3
    for (int i = 0; i < cnt3; i++) { // Loop mencetak semua angka 3
        if (!first) printf("+"); // Kalau bukan angka pertama, cetak '+'
        printf("3"); // Cetak angka 3
        first = 0; // Setelah mencetak angka pertama, set first ke 0
    }

    return 0;
}

// Semua angka 1 dicetak dulu

// Lalu semua 2

// Lalu semua 3

// Format output:
// angka dipisah +, TANPA + di depan    


// int first = 1; jika ada kayak gini tandanya tidak boleh cetak + di depan angka pertama
// first = 0; boleh mencetak + di depan angka selanjutnya


// for (inisialisasi; kondisi; perubahan)
// Kalau diterjemahin: Mulai dari mana, Sampai kapan, Naiknya bagaimana
