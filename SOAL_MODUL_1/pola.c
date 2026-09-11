#include <stdio.h>

int main() {
    int T, N;
    long long hasil;

    scanf("%d %d", &T, &N);

    if (T < 1 || T > 4) {
        printf("MODE TIDAK VALID");
    }
    else if (T == 1) {
        hasil = (long long)N * N;
        printf("%lld", hasil);
    }
    else if (T == 2) {
        hasil = (long long)N * (N + 1);
        printf("%lld", hasil);
    }
    else if (T == 3) {
        hasil = (long long)N * (N + 1) * (2 * N + 1) / 6;
        printf("%lld", hasil);
    }
    else if (T == 4) {
        hasil = (long long)N * (N + 1) / 2;
        hasil = hasil * hasil;
        printf("%lld", hasil);
    }

    return 0;
}