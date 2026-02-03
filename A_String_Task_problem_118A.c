#include <stdio.h>
#include <ctype.h>   // untuk tolower()
#include <string.h>  // untuk strlen()

int isVowel(char c) {
    // cek apakah karakter adalah vokal
    return (c == 'a' || c == 'o' || c == 'y' ||
            c == 'e' || c == 'u' || c == 'i');
}

int main() {
    char s[101];
    scanf("%s", s);

    for (int i = 0; i < strlen(s); i++) {
        char c = tolower(s[i]); // ubah ke huruf kecil dulu

        if (!isVowel(c)) {
            printf(".%c", c);
        }
    }

    return 0;
}
