#include <stdio.h>

int power(int a, int m)
{
    if (m == 0)
    {
        return 1;
    }
    return (a * power(a, m - 1));
}

int main()
{
    printf("%d\n", power(2, 3));
    return 0;
}