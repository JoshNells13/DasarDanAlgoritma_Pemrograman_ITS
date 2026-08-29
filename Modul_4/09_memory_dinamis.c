#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *a = (int *)malloc(5 * sizeof(int));
    char *b = (char *)calloc(10, sizeof(char));

    if (a == NULL)
    {
        printf("Alokasi memori gagal\n");
        return 1;
    }
    if (b == NULL)
    {
        printf("Alokasi memori gagal\n");
        free(a);
        return 1;
    }

    int i;
    for (i = 0; i < 5; i++)
    {
        a[i] = i + 1;
    }
    for (i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    free(a);
    free(b);
    return 0;
}