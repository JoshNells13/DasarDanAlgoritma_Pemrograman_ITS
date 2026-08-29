#include <stdio.h>

struct Point
{
    int x, y;
    int *ptr;
};

int main()
{
    int val = 50;
    struct Point point;
    struct Point *coordinate = &point;

    coordinate->x = 5;
    coordinate->y = 10;
    coordinate->ptr = &val;

    printf("%d %d %d\n", coordinate->x, coordinate->y, *coordinate->ptr);
    return 0;
}