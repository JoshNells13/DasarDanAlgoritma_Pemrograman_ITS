#include <stdio.h>
#include <math.h>

int main()
{
    int M,B;

    scanf("%d %d", &M, &B);

    int hari_beda = fmin(M, B);

    int sisa_m = M - hari_beda;
    int sisa_b = B - hari_beda;

    int hari_sama = sisa_m / 2 + sisa_b / 2;
    printf("%d %d", hari_beda, hari_sama);

    return 0;
}