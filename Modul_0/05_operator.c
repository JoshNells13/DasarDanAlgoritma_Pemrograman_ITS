#include <stdio.h>

int main()
{
    int a, b;
    a = 5;
    b = ++a;
    printf("prefix ++: a = %d, b = %d\n", a, b);

    a = 5;
    b = a++;
    printf("postfix ++: a = %d, b = %d\n", a, b);

    int p = 11, q = 24, r = 11;
    printf("((p == r) && (q > p)) = %d\n", ((p == r) && (q > p)));
    printf("((p >= q) || (p < r)) = %d\n", ((p >= q) || (p < r)));

    int s = 12, t = 5;
    s += t;
    printf("s += t -> s = %d\n", s);
    return 0;
}