#include <stdio.h>
#include <math.h>

int main()
{
    int x1, y1, x2, y2;

    scanf("%d %d", &x1, &y1);
    scanf("%d %d", &x2, &y2);

    int dx = x2 - x1;
    int dy = y2 - y1;

    double distance = sqrt(dx * dx + dy * dy);
    printf("%.2f", distance);

    return 0;
}