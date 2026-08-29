#include <stdio.h>

int main()
{
    int var = 5;
    printf("%d\n", var);
    printf("%p\n", &var);

    int var2 = 55;
    int *ptr = &var2;
    printf("%d\n", *ptr);
    *ptr = 20;
    printf("%d\n", *ptr);
    printf("%d\n", var2);
    return 0;
}