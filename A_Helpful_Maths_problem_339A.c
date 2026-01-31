#include <stdio.h>
#include <string.h>

int main() {
    char s[101];
    int cnt1 = 0, cnt2 = 0, cnt3 = 0;

    // Input string
    scanf("%s", s);

    // Hitung jumlah 1, 2, dan 3
    for (int i = 0; i < strlen(s); i++) {
        if (s[i] == '1') cnt1++;
        else if (s[i] == '2') cnt2++;
        else if (s[i] == '3') cnt3++;
    }

    int first = 1;

    // Cetak semua 1
    for (int i = 0; i < cnt1; i++) {
        if (!first) printf("+");
        printf("1");
        first = 0;
    }

    // Cetak semua 2
    for (int i = 0; i < cnt2; i++) {
        if (!first) printf("+");
        printf("2");
        first = 0;
    }

    // Cetak semua 3
    for (int i = 0; i < cnt3; i++) {
        if (!first) printf("+");
        printf("3");
        first = 0;
    }

    return 0;
}
