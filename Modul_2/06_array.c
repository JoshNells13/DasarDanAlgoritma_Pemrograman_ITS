#include <stdio.h>

int main()
{
    int a[10];
    int b[5] = {1, 2, 3, 4, 5};

    a[0] = 50;
    a[1] = 20;
    printf("%d %d\n", a[0], a[1]);

    int i;
    for (i = 0; i < 5; i++)
    {
        printf("Bilangan ke-%d adalah %d\n", i + 1, b[i]);
    }
    return 0;
}