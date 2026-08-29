#include <stdio.h>

#define PI 3.14

int main()
{
    const int konstInt = 23;
    const double konstDouble = 23.12;

    printf("%d\n", konstInt);
    printf("%.2lf\n", konstDouble);
    printf("%.2lf\n", PI);
    return 0;
}