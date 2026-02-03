#include <stdio.h>
#include <ctype.h>   // untuk tolower()
#include <string.h>  // untuk strlen()

int isVowel(char c) { // Membuat fungsi sendiri, 1 → jika vokal, 0 → jika bukan vokal
    // cek apakah karakter adalah vokal
    return (c == 'a' || c == 'o' || c == 'y' ||
            c == 'e' || c == 'u' || c == 'i'); // mengembalikan 1 jika vokal, 0 jika bukan
}

int main() {
    char s[101]; // 100 karakter + 1 karakter \0
    scanf("%s", s);

    for (int i = 0; i < strlen(s); i++) {
        char c = tolower(s[i]); // ubah ke huruf kecil dulu

        if (!isVowel(c)) { // jika c bukan vokal. c adalah konsonan.
            printf(".%c", c); // cetak titik ("".%c") dan karakter konsonan (c). SI C TADI ITU ADALAH CHAR!
        }
    }

    return 0;
}

// int isVowel(char c): memeriksa apakah sebuah karakter (huruf) merupakan vokal atau bukan
// isVowel('a'); // return 1  (vokal). APAKAH HURUF 'a' ITU VOKAL? YA
// Jadi c di situ tuh gunanya untuk menampung karakter yang mau dicek apakah vokal atau bukan
// strlen(s): Menghitung jumlah karakter dalam string s


// tolower(s[i]): Mengubah karakter s[i] menjadi huruf kecil
