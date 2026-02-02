#include <stdio.h>

int main() {
    int k, w; // k = harga per pisang, w = jumlah pisang
    long long n; // n = uang yang dimiliki tentara

    scanf("%d %lld %d", &k, &n, &w);

    // total biaya = k * (1 + 2 + ... + w)
    long long total_cost = (long long)k * w * (w + 1) / 2;

    if (total_cost > n) {
        printf("%lld\n", total_cost - n);
    } else {
        printf("0\n"); // tidak perlu meminjam uang
    }

    return 0;
}


// Harga pisang:
// Harga pisang = k + 2k + 3k + ... + wk
// Harga Pisang = k * (1 + 2 + 3 + ... + w)
//             Di mana, bahwa = 1 + 2 + ... + w = w(w+1)/2
//                      Save formula: w(w+1)/2
//                      formula akhir (total_cost): k * [w * (w+1) / 2]
// CONCLUSION: total_cost = k * [w * (w+1) / 2]


// Jika total_cost > n, maka tentara perlu meminjam uang sebanyak (total_cost - n)
// Jika total_cost <= n, maka tentara tidak perlu meminjam uang (0)
