#include <stdio.h>
#include <string.h>

int main()
{
    char a[] = "Halo";
    char b[10];

    strcpy(b, a);
    printf("strcpy -> b = %s\n", b);

    char c[20];
    char d[] = " Kawan";
    strcpy(c, a);
    strcat(c, d);
    printf("strcat -> c = %s\n", c);

    char e[] = "Hai";
    if (strcmp(a, e) == 0)
    {
        printf("String a sama dengan e\n");
    }
    else
    {
        printf("String a tidak sama dengan e\n");
    }

    printf("strlen -> panjang \"%s\" = %d\n", a, (int)strlen(a));
    return 0;
}