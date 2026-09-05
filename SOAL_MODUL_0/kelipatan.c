#include <stdio.h>

int main()
{
    long long n;
    scanf("%lld", &n);

    long long a = n / 3;
    long long b = n / 5;
    long long c = n / 15;

    long long sum3 = 3 * a * (a + 1) / 2;
    long long sum5 = 5 * b * (b + 1) / 2;
    long long sum15 = 15 * c * (c + 1) / 2;

    long long sum = sum3 + sum5 - sum15;

    printf("%lld\n", sum);

    return 0;
}