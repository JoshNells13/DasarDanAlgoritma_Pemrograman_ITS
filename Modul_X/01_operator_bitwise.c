#include <stdio.h>

int main()
{
    int a = 12;
    int b = 5;

    printf("12 & 5  = %d\n", a & b);
    printf("12 | 5  = %d\n", a | b);
    printf("12 ^ 5  = %d\n", a ^ b);
    printf("~12     = %d\n", ~a);
    printf("13 << 2 = %d\n", 13 << 2);
    printf("13 >> 2 = %d\n", 13 >> 2);
    return 0;
}