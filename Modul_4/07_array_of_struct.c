#include <stdio.h>

struct Point
{
    int x, y;
};

int main()
{
    struct Point arr[3];
    arr[0].x = 2, arr[0].y = 3;
    arr[1].x = 5, arr[1].y = 3;
    arr[2].x = 2, arr[2].y = 8;

    int i;
    for (i = 0; i < 3; i++)
    {
        printf("%d %d\n", arr[i].x, arr[i].y);
    }
    return 0;
}