#include <stdio.h>

int main() {
    int k, w;
    long long n;

    scanf("%d %lld %d", &k, &n, &w);

    // total biaya = k * (1 + 2 + ... + w)
    long long total_cost = (long long)k * w * (w + 1) / 2;

    if (total_cost > n) {
        printf("%lld\n", total_cost - n);
    } else {
        printf("0\n");
    }

    return 0;
}
