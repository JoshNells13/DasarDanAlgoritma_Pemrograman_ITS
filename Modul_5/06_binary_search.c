#include <stdio.h>

int binarySearch(int arr[], int low, int high, int item)
{
    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] == item)
        {
            return mid;
        }
        if (arr[mid] < item)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {2, 3, 8, 10, 13, 17, 28, 35};
    int n = sizeof(arr) / sizeof(arr[0]);
    int item = 13;
    int idx = binarySearch(arr, 0, n - 1, item);

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