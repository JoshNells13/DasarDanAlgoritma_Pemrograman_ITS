#include <stdio.h>

int linearSearch(int arr[], int n, int item)
{
    int i;
    for (i = 0; i < n; ++i)
    {
        if (item == arr[i])
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {2, 3, 8, 10, 13, 17, 28, 35};
    int n = sizeof(arr) / sizeof(arr[0]);
    int item = 13;
    int idx = linearSearch(arr, n, item);

    if (idx == -1)
    {
        printf("Tidak ditemukan\n");
    }
    else
    {
        printf("Ditemukan di indeks ke-%d\n", idx);
    }
    return 0;
}