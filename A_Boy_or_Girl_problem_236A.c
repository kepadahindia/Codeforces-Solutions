#include <stdio.h>
#include <string.h>

int main() {
    char s[101];
    int freq[26] = {0};
    int count = 0;

    // Input username
    scanf("%s", s);

    // Hitung karakter unik
    for (int i = 0; i < strlen(s); i++) {
        int idx = s[i] - 'a';
        if (freq[idx] == 0) {
            freq[idx] = 1;
            count++;
        }
    }

    // Cek ganjil / genap
    if (count % 2 == 0) {
        printf("CHAT WITH HER!");
    } else {
        printf("IGNORE HIM!");
    }

    return 0;
}
